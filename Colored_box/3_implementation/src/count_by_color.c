#include "prototypes.h"

error_t count_by_color(box *start, color_data *color_data, color_b color){

    box *ptr;
    ptr = start;
    int num = 0;
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
    
        while(ptr != NULL){
            if(ptr->color == color){
                num+=1;
            }

            ptr = ptr->next;
        }
        color_data->num = num;
        color_data->color = color;
        return SUCCESS;
    }

} 