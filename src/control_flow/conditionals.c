#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = -1;

    if (!a) {  //same as (a == 0)
        printf("a == 0\n");
    } else if (a < 0) {
        printf("a < 0\n");
    } else if (a > 0) {
        printf("a > 0\n");
    }

    return EXIT_SUCCESS;
}