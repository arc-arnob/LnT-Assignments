#include "prototypes.h"

error_t insert_end(box *start, 
                int id, 
                float length, 
                float breadth,
                float weight,
                float height,
                color_b color)
{
    box *new_box, *ptr;
    new_box = (box *)malloc(sizeof(box));

    new_box->uniq_id = id;
    new_box->length = length;
    new_box->breadth = breadth;
    new_box->weight = weight;
    new_box->color = color;
    new_box->height = height;
    new_box->next = NULL;

    if(start == NULL){
        free(new_box);
        return NO_HEAD_EXIST;
    }
    else{
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new_box;

        return SUCCESS;
    }


}