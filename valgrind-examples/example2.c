#include<stdio.h>
#include "string.h"
#include "stdint.h"
#include "stdlib.h"
#include "time.h"

int main(int argc, char* argv[]) {
  int *parr;
  int len=10,sum=0;
  if(argc > 1)
    len = strtoul(argv[1],NULL,10);
  
  parr = malloc(len * sizeof(int));
  srand(time(0));
  
  for(int i=0;i<len;i++)
    parr[i] = rand()%100;
  for(int i=0;i<len;i++)
    sum += parr[i];
  
  parr[5] = 50;     
  free(parr); // freeing and then reaccesing in next line
  
  printf("Thank You\n");
  return 0;
}
