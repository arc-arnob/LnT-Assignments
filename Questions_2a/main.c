#include "prototypes.h"

int main(){

    //info_t person;
    FILE *f = NULL;
    error_t open = openFile("data.csv","r", &f);

    
    info_t* arr = malloc(5*sizeof(info_t)); 

    if(open == FILE_NOT_FOUND){
        printf("%s", "File Not Found");
    }
    else{
        char fileData[100] = {0};
        char *word;
        int i = 0;
        while( readFile(&f, fileData) == 1){
            
            if (feof(f)){
                printf("%s", "File end");
                break;
            }
            // printf("%s", "File Found");
            // printf("%s\n", fileData);

            info_t *person = (info_t *)malloc(sizeof(person));

            word = strtok(fileData, ",");
            strcpy(person->name,word);
            word = strtok(NULL, ",");
            strcpy(person->email,word);
            word = strtok(NULL, ",");
            strcpy(person->link,word);

            printf("Name: %s\n Email: %s\n Github Link: %s\n \n", person->name,person->email,person->link);
            strcpy(arr[i].name, person->name);
            strcpy(arr[i].email, person->email);
            strcpy(arr[i].link, person->link);
            i++;
            freeMemory(person);

            



        }

        sort(arr);


    }
    free(arr);
    fclose(f);
    return 0;

}
//gcc -I inc src/freeFile.c src/openFile.c src/readFile.c src/sort.c main.c -o read_csv.c