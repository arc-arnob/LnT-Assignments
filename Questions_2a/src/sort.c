#include "prototypes.h"

int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,
                  ((info_t*)q)->name);
}


int sort(info_t *temp)
{
    if(temp==NULL)
    {
        return 0;
    }
    qsort(temp, 3, sizeof(info_t), comparator);
    printf("After Sorting: \n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s \n",(temp+i)->name);
        printf("Email: %s \n",(temp+i)->email);
        printf("Link: %s \n",(temp+i)->link);

    }
    return 1;

}