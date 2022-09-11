#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number, result;

    do {
        printf("Enter -1 to exit\n");
        scanf("%d", &number);
        if (number > 0) {
            result = 1;
            while (result <= number) result <<= 1; // Same as 'result *= 2;'
            printf("Minimum power of 2 greater than %d: %d\n", number, result);
        }
    } while (number != -1);

    return EXIT_SUCCESS;
}