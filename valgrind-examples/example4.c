#include<stdio.h>
#include "string.h"
#include "stdint.h"
#include "stdlib.h"
#include "time.h"
int main(int argc, char* argv[]) {
  int *parr;
  int len=10, sum=0;
  parr = malloc(len * sizeof(int));
  srand(time(0));
  
  for(int i=0;i<len;i++)
    parr[i] = rand()%100;
  
  for(int i=0;i<len;i++){
    //sum += *parr++;  // this line will take pointer to the end, hence
                      //... we are trying to free non allocated mem            
    sum += parr[i];
  } 
  free(parr);
  return 0;
}
