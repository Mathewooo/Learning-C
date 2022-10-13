#include <stdio.h>

void printInstruction(int pos, unsigned v1, char v2, u_int64_t ptr, int n);

int main(void) {
    char a = 'A';
    char *ptr = &a;
    printInstruction(1, a, *ptr, (u_int64_t) ptr, 0);

    char b = 'B';
    ptr = &b;
    printInstruction(2, b, *ptr, (u_int64_t) ptr, 0);

    *ptr = 'C';
    printInstruction(3, b, *ptr, (u_int64_t) ptr, 0);

    (*ptr)++;
    printInstruction(4, b, *ptr, (u_int64_t) ptr, 0);

    unsigned x = 'A';
    ptr = (char *) &x;
    printInstruction(5, x, *ptr, (u_int64_t) &x, 1);

    unsigned y = 'B';
    ptr = (char *) &y;
    printInstruction(6, y, *ptr, (u_int64_t) &y, 1);

    *ptr = 67;
    printInstruction(7, y, *ptr, (u_int64_t) &y, 1);

    (*ptr)++;
    printInstruction(8, y, *ptr, (u_int64_t) &y, 1);

    x = 0xABCD1234;
    ptr = (char *) &x;
    printf("9 | %X, %X, %c\n", x, *ptr, *ptr);

    *ptr = 'C';
    printf("10 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);

    unsigned *uint_ptr = (unsigned *) ptr;
    *uint_ptr = 'C';
    printf("11 | %u, %X, %X, %c\n", x, x, *ptr, *ptr);

    return 0;
}

void printInstruction(int pos, unsigned v1, char v2, u_int64_t ptr, int n) {
    if (!n) printf("%d | %c, %c, %llu\n", pos, v1, v2, ptr);
    else printf("%d | %u, %c, %llu\n", pos, v1, v2, ptr);
}
