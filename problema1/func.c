#include "func.h"

void create_array(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = i*i;
    }
}

void print_array(int *array, int size){
    for (int i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
}
