/* TwoDimArrays.cpp -- Two-dimensional arrays
wfp, 2/13/2009
CSE 251
*/

#include<stdio.h>

#define ROWS 3
#define COLS 5


typedef int Table[ROWS][COLS];

void display( Table );

/*--------------------------------------------------------------------------
 Name:  main

 Purpose:  Demonstrate the use of two-dimensional arrays.
--------------------------------------------------------------------------*/

int main()
{
  // Notice where the zero appears
  Table A =
  {
    {13, 22,  9, 23},
    {17,  5, 24, 31, 55},
    {4, 19, 29, 41, 61}
  };
  
  display( A );
  int i, j;
  for (i=0; i < ROWS; i++)
  {
    for (j=0; j < COLS; j++ )
    {
      A[i][j] = i + j;
    }
  }
  
  display( A );
  
  // Notice where the zero appears
  Table B = 
  {
    1, 2, 3, 4,
    5, 6, 7, 8, 9, 
    10, 11, 12, 13, 14
  };

  display( B );

  for (i=0; i < ROWS; i++)
  {
    for (j=COLS-1; j > 0; j--)
    {
      B[i][j] = B[i][j-1] * 10;
    }
  }
  
  display( B );
  
  return 0;
}

/*--------------------------------------------------------------------------
 Name:  display

 Purpose:  Display the contents of a two-dimensional array.
 Receive:  The two -dimensional array.
 Output:   The array contents, row by row.
--------------------------------------------------------------------------*/

void display( Table X )
{
  for (int i=0; i < ROWS; i++)
  {
    for (int j=0; j < COLS; j++ )
    {
      printf(" X[%d][%d]: %d",i,j,X[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

