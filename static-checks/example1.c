#include<stdio.h>
#include "string.h"
#include "stdint.h"
#include "stdlib.h"
#include "time.h"
int arr[10];
int main(int argc, char* argv[]) {
  int *parr;
  int len=10, sum=0; // initialied to 0
  if(argc > 1)
    len = strtoul(argv[1],NULL,10); // converting string to unsigned long with base 10.
  
  parr = malloc(len * sizeof(int)); // allocating size for input
  
  srand(time(0)); // seed for random number generator
  
  for(int i=0;i<len;i++)
    parr[i] = rand()%100;
  
  for(int i=0;i<len+10;i++)
    sum += parr[i];
  
  printf("%d %d", arr[9], sum);
  free(parr);
  return 0;
}
// cppcheck --enable=all example1.c
// gcc -Wall -g example1.c