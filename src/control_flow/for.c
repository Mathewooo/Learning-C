#include <stdlib.h>
#include <printf.h>

int main() {
    int number = 1;

    for (int index = 0; index < 5; index++) { //If we'll have only 'for (;;) {}' it will be an endless loop
        printf("%d\n", number++);
    }

    return EXIT_SUCCESS;
}