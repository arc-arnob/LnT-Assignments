#include<stdio.h>
#include "string.h"
#include "stdint.h"
#include "stdlib.h"
#include "time.h"
int arr[10] ={};
int main(int argc, char* argv[]) {
  int *parr;
  int len=10, sum=0; // uninitialized sum --f
  if(argc > 1)
    len = strtoul(argv[1],NULL,10);
  
  parr = malloc(len * sizeof(int)); // 80 bytes allocated--> passed 20 as argv
  
  srand(time(0));
  
  for(int i=0;i<len;i++)
    parr[i] = rand()%100;
  
  for(int i=0;i<len;i++) // len+10 -- f
    sum += parr[i]; // invalid read of size 4 --f
  
  printf("%d", arr[9]); // cppcheck --> invalid access arr[10] --> arr[9] --f
  free(parr);
  return 0;
}
