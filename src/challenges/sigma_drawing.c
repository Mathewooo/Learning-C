#include <stdio.h>
#include <stdlib.h>

const char symbol = 'x';

void printBase(int totalWidth) {
    int index = 1;
    while (index < totalWidth) {
        index++;
        if (index != totalWidth) printf("%c", symbol);
        else printf("%c\n", symbol);
    }
}

void printSymbol(int padding) {
    printf("%*c\n", padding, symbol);
}

int main(void) {
    for (int i = 1; i <= 6; i++) {
        if (i == 1) printBase(10);
        else if (i > 1 && i <= 6) printSymbol(i);
    }

    for (int j = 5; j > 0; j--) {
        if (j == 1) printBase(10);
        else if (j > 1 && j <= 5) printSymbol(j);
    }

    return EXIT_SUCCESS;
}