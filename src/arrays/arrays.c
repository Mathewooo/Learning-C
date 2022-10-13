#include <stdio.h>

#define LEN 5 // Preprocessor directive whose usages will compiler then replace with the actual number it defines

int main(void) {
    // ARRAYS: (DECLARATION & INITIALIZATION)
    int arr[LEN]; // Array of type int (Declaration) (It contains unpredictable values without initialization!)

    for (int i = 0; i < LEN; i++) { // Initialization with for loop (array has 5 elements and each one is '1')
        arr[i] = 1;
    }

    // Array initialization from brace-enclosed lists:
    int x[] = {1, 2, 3, 4, 5};

    x[0] = 10; // Setting array's first value at index '0' to number 10

    int y[LEN] = {1, 2, 3}; // The numbers that aren't initialized within the length of the array will
    // be automatically initialized to '0' by the compiler

    int z[LEN] = {0}; // Array full of '0'

    // Array initialization with designators (sparse array):
    int w[LEN] = {
            [1] = 1,
            [3] = 1
    }; // This array holds elements: (0, 1, 0, 1, 0)

    int q[LEN] = {
            [1] = 3,
            [LEN - 1] = 5
    }; // This array holds elements: (0, 3, 0, 0, 5)

    int t[10] = {
            [0] = 5,
            4,
            [LEN - 3] = 3,
            2,
            1
    }; // Index is then followed after the designator's used index

    for (int i = 0; i < 10; i++) {
        printf("%d\n", t[i]);
    }

    return 0;
}