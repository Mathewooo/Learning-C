#include <stdio.h>

void inDirectingPointer(const int *p);

int main(void) {
    const int *ptr = NULL; //You can change pointer's address, but you can't the values it points to
    const int character = '/';

    inDirectingPointer(ptr);

    if (!ptr) //Same as 'ptr == NULl'
        ptr = &character;

    inDirectingPointer(ptr);

    return 0;
}

void inDirectingPointer(const int *p) {
    if (p) //Same as 'ptr != NULl'
        printf("Pointer value: %d, character: %c", *p, *p);
}