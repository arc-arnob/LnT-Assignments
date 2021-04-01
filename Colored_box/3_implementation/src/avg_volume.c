#include "prototypes.h"

error_t avg_volume(box *start, average_vol_data *avg_data){

    float sum = 0;
    float avg;
    int num = 0;
    box *ptr;
    ptr = start;
    if(start == NULL){
        return NO_HEAD_EXIST;
    }
    else{
        while(ptr != NULL){
            float volume = (ptr->length * ptr->breadth * ptr->height);
            sum+=volume;
            num+=1;
            ptr = ptr->next;
        }

        avg = sum / num;

        avg_data->num = num;
        avg_data->average = avg;

        return SUCCESS;
    }
        

}