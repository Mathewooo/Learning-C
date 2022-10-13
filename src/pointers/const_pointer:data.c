#include <stdio.h>

int main(void) {
    int amount = 13;

    int *const ptr = &amount; //Constant pointer
    const int *ptr2 = &amount; //Pointer to constant
    const int *const ptr3 = &amount; //Everything constant

    printf("%d\n", *ptr);
    printf("%d\n", *ptr2);
    printf("%d\n", *ptr3);

    return 0;
}