/* echo command lines
wfp CSE 251
3/31/2009
*/
#include<stdio.h>
#include<string.h>

// also int main(int argc, char* argv[])
int main (int argc, char **argv){
  int i;
  printf("Number of args is: %d\n", argc);
  for(i=0;i<argc;i++){
    printf("Arg %d is: %s\n",i,argv[i]);
  }
}
