#include "prototypes.h"


int main(){
    box *start = NULL;
    average_vol_data avg_data = {0};
    color_data col_data = {0};
    box res ={0};
    max_height_data data ={0};
    float diff = 0;

    start = create_ll(start,1,1,1,1,1,GREEN);
    error_t code_2 = insert_end(start,2,3,4,5,6,GREEN);
    error_t code_61 = insert_end(start,100,100,100,100,100,GREEN);

    error_t code_7 = display_ll(start);
    //error_t code_8 = delete_box(start,5);
    error_t code_8 = avg_volume(start,&avg_data);
    printf("average volume %d %f\n", avg_data.num, avg_data.average);

    error_t code_9 = count_by_color(start,&col_data,GREEN);
    printf("color is %d %d\n", col_data.num, col_data.color);

    error_t code_10 = find_by_id(start,3,&res);
    printf("%d found id: \n", res.uniq_id);

    error_t code_11 = find_max_height(start,&data);
    printf("found height: %f \n", data.height);

    error_t code_12 = min_max_v_diff(start, &diff);
    printf("Max min diff is %f \n", diff);

    error_t code_13 = update_weight(start, 2, 1000);
    printf("&*&*^*#&$#&$*#&#*&$*&#$*#*&$*#&\n");
    error_t code_14 = display_ll(start);
    return 0;

}