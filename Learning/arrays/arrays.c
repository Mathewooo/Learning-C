#include <stdio.h>
#include "dynamic_array.h"

#define MIN 5
#define MAX (MIN * 100)

void printExpenses(const ArrayList *arr);

int main(void) {
    ArrayList expenses;
    initArray(&expenses, MIN);

    for (int i = 0; i < MAX; i++) {
        float currentValue;
        printf("Please enter your expense (Or enter 0 to exit and output your expenses): ");
        scanf("%f", &currentValue);
        if (currentValue == 0 && i < MIN) {
            printf("Enter at least %d more expense/s - ", MIN - i);
            i--;
            continue;
        } else if (currentValue == 0) break;
        insertElement(&expenses, currentValue);
    }

    printExpenses(&expenses);
    freeArray(&expenses);

    return 0;
}

void padding(int both) {
    printf(both ? "\n------------------\n" : "------------------\n");
}

void printExpenses(const ArrayList *const arr) {
    padding(1);
    float sum = 0;
    for (int i = 0; i < arr->used; i++) {
        const float current = arr->array[i];
        printf(" %d | %9.2f $\n", i + 1, current);
        sum += current;
    }
    padding(0);
    printf("Sum: %9.2f $", sum);
    padding(1);
}