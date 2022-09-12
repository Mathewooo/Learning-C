#include <stdio.h>

int main(void) {
    int input, accumulator = 0;
    const int ITERATIONS = 10;

    for (int i = 0; i < ITERATIONS; i++) {
        printf("Enter an integer (-1 to exit): ");
        scanf("%d", &input);
        if (input == -1) break;
        accumulator += input;
    }

    printf("%d\n", accumulator);

    for (int i = 0; i < ITERATIONS; i++) {
        printf("Enter an integer > 0: ");
        scanf("%d", &input);
        if (input < 0) continue;
        accumulator += input;
    }

    printf("%d\n", accumulator);

    return 1;
}