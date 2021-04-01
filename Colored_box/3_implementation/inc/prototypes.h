
/**
 * @file prototypes.h
 * @author Arnob Chowdhury (https://github.com/arc-arnob)
 * @brief This program is for simulating data manipulation using Linked List
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PROTOTYPES_H__
#define __PROTOTYPES_H__

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

/**
 * @brief Error values for unit testing
 * 
 */
typedef enum error_t{
    ERROR_NULL_PTR = -2,
    SUCCESS = 0,
    START_EXISTS=1,
    NO_HEAD_EXIST=2
}error_t;

typedef enum color_b{
    RED = 0,
    GREEN,
    YELLOW,
    BLUE,
    VIOLET
}color_b;

/**
 * @brief Structure containing details about box
 * 
 */
typedef struct box{
    int uniq_id;
    float length;
    float breadth;
    float height;
    float weight;
    color_b color;
    struct box *next;
}box;

/**
 * @brief This structure is for storing average volume related data
 * 
 */
typedef struct avg_vol_data{
    int num;
    float average;
}average_vol_data;

/**
 * @brief Stores number of boxes with given color
 * 
 */
typedef struct color_data{
    int num; // Number of boxes with given color
    color_b color; // given color
}color_data;

/**
 * @brief stores id and height of tallest box
 * 
 */
typedef struct max_height_data{
    int id;
    float height;
}max_height_data;



/**
 * @brief Create a box object
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
box *create_ll(box *, int, float, float, float, float, color_b);

/**
 * @brief display status of the boxes
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t display_ll(box *);

/**
 * @brief Add a new box at the end
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t insert_end(box *, int, float, float, float, float, color_b);
/**
 * @brief finds a box by Id
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t find_by_id(box *, int, box *);

/**
 * @brief counts all boxes of specific color
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t count_by_color(box *, color_data *, color_b);

/**
 * @brief find average volume of all boxes
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t avg_volume(box *, average_vol_data *);

/**
 * @brief find difference between max and min volume
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t min_max_v_diff(box *, float *);

/**
 * @brief Finds maximum height box
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t find_max_height(box *, max_height_data *);
/**
 * @brief Updates weight of a box by id
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t update_weight(box *, int, float);
/**
 * @brief deletes a box
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t delete_box(box *, int);

#endif


