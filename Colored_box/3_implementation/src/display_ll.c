#include "prototypes.h"

error_t display_ll(box *start)
{
    box *ptr;
    ptr = start;
    
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        while(ptr != NULL){
            printf("Details about box id: %d\n", ptr->uniq_id);
            printf("Length: %f\n", ptr->length);
            printf("Breadth: %f\n", ptr->breadth);
            printf("Height: %f\n", ptr->height);
            printf("Weight: %f\n", ptr->weight);
            printf("Color: %d\n", ptr->color);

            printf("****************************\n");
            ptr = ptr->next;
        }
        return SUCCESS;
    }


}