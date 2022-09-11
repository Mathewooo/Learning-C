#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("You cannot enter a negative number!");
        return EXIT_FAILURE;
    } else {
        const bool even = number % 2 == 0 ? true : false;
        if (even) printf("Number is even");
        else printf("Number is odd");
    }

    return EXIT_SUCCESS;
}