//**************************************************************
// Written by Steven Smail for COP3514
//
// barcode.c (Project 3)
//
// This program finds the edges of light and dark regions of an
// 8-bit binary input pattern.
//**************************************************************

#include <stdio.h>
#define N 8

//Function Declaration
void edge(int n, int a1[], int a2[]);

int main(void)
{
  int i;
  int a1[N];
  int a2[N] = {0};

  printf("Enter the 8-bit barcode:\n");
  for(i = 0; i < N; i++)
    scanf("%1d", &a1[i]);

  //Function Call
  edge(N, a1, a2);

  printf("Output: ");
  for(i = 0; i < N; i++)
    printf("%d", a2[i]);
  printf("\n"); 

  return 0;
}

//Function Definition
void edge(int n, int a1[], int a2[])
{
  int i;

  for(i = 1; i < n; i++)
  {
    if(a1[i] == a1[i-1])
      a2[i] = 0;
    else
      a2[i] = 1;
  }
}