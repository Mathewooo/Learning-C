#include <libc.h>
#include <stdbool.h>

void printValues(bool x, bool y) {
    printf("| %d | %d |%5d    |%5d   |%4d   |\n", x, y, x && y, x || y, !x);
}

int main(void) {
    //LOGICAL OPERATORS:
    bool x, y;

    //Boolean algebra:
    printf("Truth Table\n");
    printf("------------------------------------\n");
    printf("| x | y | x AND y | x OR y | NOT x |\n");
    printf("------------------------------------\n");

    x = 0;
    y = 0;
    printValues(x, y);

    x = 1;
    y = 0;
    printValues(x, y);

    x = 0;
    y = 1;
    printValues(x, y);

    x = 1;
    y = 1;
    printValues(x, y);

    printf("------------------------------------\n");
    return EXIT_SUCCESS;
}