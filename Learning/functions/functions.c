#include <stdio.h>

//FUNCTION  DECLARATIONS:
int sum(int a, int b);
void printStudents(int students);

int main(void) {
    int students, girls = 12, boys = 20;
    students = sum(girls, boys);
    printStudents(students);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

void printStudents(int students) {
    printf("Students = %d\n", students);
}
