#include "prototypes.h"

int readFile(FILE **fptr, char* data){
	return fscanf(*fptr, "%s", data);
    // read one word at a time
}