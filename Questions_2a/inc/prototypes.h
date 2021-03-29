#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * @brief Code to open, read and sort a csv file
 * 
 */


/**
 * @brief enum for error reporting
 * 
 */
typedef enum error_t{
    FILE_NOT_FOUND = 1,
    SUCCESS = 0,
} error_t;

/**
 * @brief Structure for holding read data
 * 
 */
typedef struct info_t
{   
    char name[100];
	char email[100];
	char link[100];

}info_t;

/**
 * @brief Opens a file
 * 
 * @param [in] addr 
 * @param [in] mode 
 * @param [out] fptr 
 * @return error_t 
 */

error_t openFile(char *addr, char *mode ,FILE **fptr);

/**
 * @brief Frees allocated memory
 * 
 * @param [in] person 
 */
void freeMemory(info_t *person);

/**
 * @brief Reads files
 * 
 * @param fptr 
 * @param data 
 * @return int 
 */
int readFile(FILE **fptr, char *data);
/**
 * @brief Sorts using qsort
 * 
 * @param person 
 * @return int 
 */
int sort(info_t *person);