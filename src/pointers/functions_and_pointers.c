#include <stdio.h>

int accumulate(int *accumulator, int value);

int sum(int a, int b);

void printStudents(int students);

int main(void) {
    int students, girls = 12, boys = 20;
    students = sum(girls, boys);
    printStudents(students);

    int accumulator = 0;

    if (accumulate(&accumulator, girls) == -1) printf("Warning\n");
    else printf("Agreed\n");

    printf("%d", accumulator);

    return 0;
}

int accumulate(int *const accumulator, int value) {
    if (value > 0) {
        *accumulator += value;
        return 0;
    } else return -1;
}

int sum(int a, int b) {
    return a + b;
}

void printStudents(int students) {
    printf("Students = %d\n", students);
}