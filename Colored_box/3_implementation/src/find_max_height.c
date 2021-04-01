#include "prototypes.h"

error_t find_max_height(box *start, max_height_data *data){
    
    box *ptr; 
    ptr = start;
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        int id;
        float max_height = -1;
        
        while(ptr != NULL){
            float curr_height;
            curr_height = ptr->height;
        
            if(curr_height > max_height){
                max_height = curr_height;
                id = ptr->uniq_id;
            }
            ptr = ptr->next;
        }
        
        data->id = id;
        data->height = max_height;
        return SUCCESS;
    }
}
