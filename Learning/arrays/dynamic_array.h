#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define FLOAT_SIZE sizeof(float)

//DYNAMIC ARRAY: (using dynamic memory allocation)
typedef struct {
    float *array;
    size_t used;
    size_t size;
} ArrayList;

void initArray(ArrayList *array, size_t initialSize) {
    array->array = malloc(initialSize * FLOAT_SIZE);
    array->used = 0;
    array->size = initialSize;
}

void insertElement(ArrayList *array, float element) {
    if (array->used == array->size) {
        array->size *= FLOAT_SIZE;
        array->array = realloc(array->array, array->size * FLOAT_SIZE);
    }
    array->array[array->used++] = element;
}

void freeArray(ArrayList *array) {
    free(array->array);
    array->array = NULL;
    array->used = array->size = 0;
}
