#include <stdio.h>

void swap(int *firstValue, int *secondValue);

int main(void) {
    int apples = 12;
    int pears = 34;

    printf("Before swapping: apples = %d, pears = %d\n", apples, pears);
    swap(&apples, &pears);
    printf("After swapping: apples = %d, pears = %d\n", apples, pears);

    return 0;
}

void swap(int *const firstValue, int *const secondValue) {
    const int temp = *firstValue;
    *firstValue = *secondValue;
    *secondValue = temp;
}

