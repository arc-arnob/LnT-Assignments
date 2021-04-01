#include "prototypes.h"


box *create_ll(box *start, 
                int id, 
                float length, 
                float breadth,
                float weight,
                float height,
                color_b color)
{

    box *new_box;
    new_box = (box *)malloc(sizeof(box));

    new_box->uniq_id = id;
    new_box->length = length;
    new_box->breadth = breadth;
    new_box->weight = weight;
    new_box->height=height;
    new_box->color = color;
    new_box->next = NULL;

    if(start == NULL){
        start = new_box;
        return start;
    }
    else{
        insert_end(start,id,length,breadth,weight,height,color);
        free(new_box);
        return start;
    }


}