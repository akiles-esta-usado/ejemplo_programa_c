#include "func.h"

void create_array(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] = i;
    }
}

void print_array(int *array, int size){
    for (int i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
}


void to_ascii(int *array, int size){
    for (int i = 0; i < size; i++){
        array[i] += 97;
    }
}
