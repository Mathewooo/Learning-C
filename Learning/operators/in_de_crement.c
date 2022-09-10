#include <libc.h>

int main(void) {
    //INCREMENT AND DECREMENT OPERATORS: (Also called Unary operators: they can only be used with one variable)
    printf("\n");
    int first, second;

    first = 0;
    second = first++;

    printf("After post increment\n");
    printf("A: %d\n", first);
    printf("B: %d\n", second);
    printf("\n");

    first = 0;
    second = ++first;

    printf("After pre increment\n");
    printf("A: %d\n", first);
    printf("B: %d\n", second);

    printf("\n");

    int x, y;

    x = 0;
    y = x++ * 2 + 1; //Here the pre increment is run after the expression

    printf("After postincrement\n");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("\n");

    x = 0;
    y = ++x * 2 + 1; //Here the pre increment is run before the expression

    printf("After preincrement\n");
    printf("X: %d\n", x);
    printf("Y: %d\n", y);

    return EXIT_SUCCESS;
}