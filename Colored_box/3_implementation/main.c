#include "prototypes.h"


int main(){
    
    box *start = NULL;
    average_vol_data avg_data = {0};
    color_data col_data = {0};
    box res ={0};
    max_height_data data ={0};
    float diff = 0;

    // Declaring Function Pointers
    box *(*fptr_type1)(box *, int, float, float, float, float, color_b) = create_ll;
    error_t (*fptr_type2)(box *, int, float, float, float, float, color_b) = insert_end;
    error_t (*fptr_type3)(box *) = display_ll;
    error_t (*fptr_type4)(box *, average_vol_data *) = avg_volume;
    error_t (*fptr_type5)(box *, color_data *, color_b) = count_by_color;
    error_t (*fptr_type6)(box *, int, box *) = find_by_id;
    error_t (*fptr_type7)(box *, max_height_data *) = find_max_height;
    error_t (*fptr_type8)(box *, float *diff) = min_max_v_diff;
    error_t (*fptr_type9)(box *, int, float) = update_weight;
    error_t (*fptr_type10)(box *, int) = delete_box;

    start = create_ll(start,1,1,1,1,1,GREEN);

    int choice;
    while(1)
    {
        printf("Press 1 create a Linked List\n");
        printf("Press 2 to Insert a box at the end\n");
        printf("Press 3 find Average volume of all boxes\n");
        printf("Press 4 Count boxes by a given color\n");
        printf("Press 5 to Delete a box\n");
        printf("Press 6 to find a box by id\n");
        printf("Press 7 find box with max height\n");
        printf("Press 8 find min max volume diff\n");
        printf("Press 9 update weight of a box\n");
        printf("Press 10 to display everthing\n");
        printf("Press -1 to exit.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        if(choice == -1){
            break;
        }

        if (choice >= 1 && choice <= 10)
        {   
            int id;
            float length,breadth,height,weight;
            color_b color;
           
        
            printf("%d is the choice ", choice);
            if(choice == 1){
                printf("Enter Id of box\n");
                scanf("%d",&id);
                printf("Enter Length of box\n");
                scanf("%f",&length);
                printf("Enter breadth of box\n");
                scanf("%f",&breadth);
                printf("Enter height of box\n");
                scanf("%f",&height);
                printf("Enter weight of box\n");
                scanf("%f",&weight);
                printf("Enter color of box 1 for RED blah blah...\n");
                scanf("%d",&color);
                start = (*fptr_type1)(start,id,length,breadth,height,weight,color);
            }
            if(choice == 2){
                printf("Enter Id of box\n");
                scanf("%d",&id);
                printf("Enter Length of box\n");
                scanf("%f",&length);
                printf("Enter breadth of box\n");
                scanf("%f",&breadth);
                printf("Enter height of box\n");
                scanf("%f",&height);
                printf("Enter weight of box\n");
                scanf("%f",&weight);
                printf("Enter color of box 1 for RED blah blah...\n");
                scanf("%d",&color);
                error_t code = (*fptr_type2)(start,id,length,breadth,height,weight,color);
                printf("Added Successfully\n");
            
            }
            if(choice == 3){
                (*fptr_type4)(start, &avg_data);
                printf("Average Volume of %d boxes are %f", avg_data.average, avg_data.average);
            }
            if(choice ==  4){
                printf("Enter color of box 1 for RED blah blah...\n");
                scanf("%d",&color);
                (*fptr_type5)(start,&col_data, color);
                printf("Boxes with color %s are %d", col_data.color, col_data.num);
            }

            if(choice == 5){
                printf("Enter Id of box you want to delete\n");
                scanf("%d",&id);
                (*fptr_type10)(start, id);
                printf("Deleted\n");
            }

            if(choice == 6){
                printf("Enter Id of box you want to find\n");
                scanf("%d",&id);
                (*fptr_type6)(start,id,&res);
                printf("Box with id %d is %s\n",res.uniq_id, (res.uniq_id==-1)?"Not Found" : "Found");
            }

            // Rest are similar -- 7,8,9.
            if(choice == 10){

                (*fptr_type3)(start);
        
            }
        }

        
  
  
  
    }
    
    delete_all(start);
    


    return 0;

    
}