#include "prototypes.h"

error_t update_weight(box *start, int id, float weight){

    box *ptr;
    ptr = start;
    int found = 0;
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        while(ptr != NULL){
            if(ptr->uniq_id == id){
                found = 1;
                break;
            }
            ptr = ptr->next;
        }
        if(found == 1){
            ptr->weight = weight;
        }

        return SUCCESS;
    }

} 