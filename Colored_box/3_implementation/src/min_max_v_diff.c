#include "prototypes.h"

error_t min_max_v_diff(box *start, float *diff_data){

    box *ptr;
    ptr = start;
    
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        float min_v = 100000001, max_v = -1;
        while(ptr != NULL){
            float volume = (ptr->length * ptr->breadth * ptr->height);
            min_v = (volume<min_v) ? volume : min_v;
            max_v = (volume>max_v) ? volume : max_v;
            ptr = ptr->next;
        }

        *diff_data = max_v - min_v;

        return SUCCESS;
    }
        

}