#include <stdlib.h>
#include <printf.h>

int main() {
    int number = 0;

    printf("While Loop:\n");
    while (number <= 5) { //Only executes if the condition isn't false
        printf("%d\n", number++);
    }

    printf("\n");
    printf("Do While Loop:\n");
    do { //Always executes at least one time even if the condition is not correct
        printf("%d\n", number++);
    } while (number <= 5);

    return EXIT_SUCCESS;
}