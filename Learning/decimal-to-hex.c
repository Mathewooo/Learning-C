#include <stdio.h>

int main(void) {
    printf("===||===\n");
    printf("Welcome to the decimal to hex converter!\n");
    printf("Enter a number:\n");
    int number = 0;
    scanf("%d", &number);
    printf("Decimal representation:     %9d\n", number);
    printf("Hexadecimal representation: %9X\n", number);
    printf("===||===\n");
    return 0;
}