
#include<stdio.h>
#include<stdlib.h>

void promptFile(FILE *f){
  /* if the file was bad, prompt for a new file name. Keep it up
     till we get it right */
  char input[100], fName[100];
  while (f == NULL){
    printf("Bad file name, give me another:");
    fgets(input, 100, stdin);
    sscanf(input, "%s", fName);
    f = fopen(fName,"r");
  }
}

void readFile(int **a, int rows, int cols, FILE *f){
  /* read the file contents, line at a time
     we use strtok to consume the string of line input, grabbing
     each value from the row */
  char input[100], *token;
  int i,j, val;
  for(i=0;i<rows;i++){
    fgets(input, 100, f);
    token = strtok(input," ");
    for(j=0;j<cols;j++){
      sscanf(token, "%d", &val);
      // printf("For i:%d j:%d val:%d\n",i,j,val);
      a[i][j] = val;
      token = strtok(NULL, " ");
    }
  }
}

void printArray(int **a, int rows, int cols){
  int i,j;
  printf("Array values for array at address: 0x%x\n",a);
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++)
      printf("%5d(%#X)",a[i][j],&a[i][j]);
    printf("\n");
  }
}

int main(int argc, char **argv){
  char *fName, *lines, *intsPerLine;
  int lineCount, intsPerLineCount, i, **array;
  FILE *f;
  if (argc != 4)
    printf("Usage: program fileName lines intsPerLine\n");
  else {
    fName = argv[1];
    lines = argv[2];
    intsPerLine = argv[3];
    lineCount = atoi(lines);
    intsPerLineCount = atoi(intsPerLine);
    f = fopen(fName,"r");
    // check file, prompt on error for a new file name
    promptFile(f);
    // allocate an array of pointers to ints (the rows)
    array = malloc(lineCount* sizeof(int *));
    if (array == NULL){
      printf("Memory allocation error, exiting\n");
      exit(1);
    }
    // allocate each column value for that row
    for(i=0;i<intsPerLineCount;i++){
      array[i] = malloc(intsPerLineCount * sizeof(int));
      if (array[i] == NULL){
	printf("Memory allocation error, exiting\n");
	exit(1);
      }
    }
    readFile(array, lineCount, intsPerLineCount, f);
    printArray(array,lineCount,intsPerLineCount);
    // free every row, then free the array of pointers
    for(i=0;i<lineCount;i++){
      printf("Freeing %d at address %#X \n",i, array[i]);
      free(array[i]);
    }
    printf("Freeing array at address %#X\n", array);
    free(array);
  }
}
