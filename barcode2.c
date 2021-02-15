//*******************************************************************
// Written by Steven Smail for COP3514
//
// barcode2.c (Project 5)
//
// This program finds the edges of light and dark regions of the
// input binary bit pattern.
//*******************************************************************

#include <stdio.h>

//Function Declaration
void edge(int n, int *a1, int *a2);

int main(void)
{
  int input[8] = {0};
  int output[8];

  int *p;
  printf("Enter the 8-bit barcode:\n");
  for(p = input; p < input + 8; p++)
    scanf("%1d", p);

  //Function Call
  edge(8, input, output);

  printf("Output: ");
  for(p = output; p < output + 8; p++)
    printf("%d", *p);
  printf("\n");

  return 0;
}

//Function Definition
void edge(int n, int *a1, int *a2)
{
  int *p;
  *a2 = 0;
  for(p = a1 + 1; p < a1 + n; p++)
    if(*p == *(p - 1))
      *++a2 = 0;
    else
      *++a2 = 1;
}