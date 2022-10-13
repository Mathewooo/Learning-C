#include <libc.h>
#include <stdint.h>

/**
 * type: uint8_t
 *
 * A = 12 ---> 0000 1100
 * B =  5 ---> 0000 0101
 *
 * A & B  ---> 0000 0100 = 4
 * A | B  ---> 0000 1101 = 13
 * A ^ B  ---> 0000 1001 = 9
 * A << 1 ---> 0001 1000 = 24
 * A >> 1 ---> 0000 0110 = 6
 *
 */

int main(void) {
    //BITWISE OPERATORS: (Raw bits manipulation)
    uint8_t a = 12;
    uint8_t b = 5;

    printf("A & B  = %u\n", a & b);
    printf("A | B  = %u\n", a | b);
    printf("A ^ B  = %u\n", a ^ b);

    printf("A << 1 = %u\n", a << 1U);
    printf("A >> 1 = %u\n", a >> 1U);

    //BIT MASKING:
    uint8_t data = 0b10101010;
    printf("%hhu\n", data);
    uint8_t result = data | (1 << 6);
    printf("%hhu\n", result);

    uint8_t secondData = 0b10101010;
    printf("%hhu\n", secondData);
    uint8_t secondResult = data | ~(1 << 5);
    printf("%hhu\n", secondResult);

    uint8_t thirdData = 0b11101001;
    printf("%hhu\n", thirdData);
    uint8_t thirdResult = (data >> 3) & 0b111;
    printf("%hhu\n", thirdResult);

    return EXIT_SUCCESS;
}