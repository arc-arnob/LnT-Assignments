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
    START_EXISTS=1
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
    box *next;
}box;

/**
 * @brief This marks the start of the linked list
 * 
 */
box *start = NULL;

/**
 * @brief Create a box object
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t create_ll(box *);

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
error_t insert_end(box *);
/**
 * @brief finds a box by Id
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t find_by_id(box *);

/**
 * @brief counts all boxes of specific color
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t count_by_color(box *);

/**
 * @brief find average volume of all boxes
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t avg_volume(box *);

/**
 * @brief find difference between max and min volume
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t min_max_v_diff(box *);

/**
 * @brief Finds maximum height box
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t find_max_height(box *);
/**
 * @brief Updates weight of a box by id
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t update_weight(box *);
/**
 * @brief deletes a box
 * @param[in]  box * Pointer to start node
 * @return error_t 
 */
error_t delete_box(box *);


