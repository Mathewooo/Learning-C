#include <stdio.h>
#include <libc.h>
#include <stdint.h>

int main(void) {
    int variable = 0;
    printf("%lu\n", sizeof(variable));
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(long int));
    printf("%lu\n", sizeof(long long int));
    printf("%lu\n", sizeof(char));
    printf("%lu\n", sizeof(int16_t));
    printf("%lu\n", sizeof(int32_t));
    printf("%lu\n", sizeof(int64_t));
    printf("%lu\n", sizeof(123 && 456)); //Always returns int
    printf("%lu\n", sizeof(123LL && 456LL)); //Always returns int

    return EXIT_SUCCESS;
}