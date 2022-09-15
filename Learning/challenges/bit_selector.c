#include <stdio.h>
#include <stdlib.h>

const int data = 0xABCD;

typedef struct {
    uint8_t n;
    uint8_t m;
} Tuple;

const Tuple arrayOfSelections[] = {
    {0, 3},
    {4, 7},
    {8, 11},
    {12, 15}
};

void displaySelectedBits(uint8_t n, uint8_t m) {
    unsigned w = m - n + 1; //At this example width of bitmask is always '4'
    unsigned bitmask = (1 << w) - 1; //Here bitmask is always '0x000F' (again only in this example)
    unsigned result = (data >> n) & bitmask;
    printf("result --> 0x%04X\n", result);
}

int main(void) {
    const int size = sizeof arrayOfSelections / sizeof *arrayOfSelections; //First you need to determine the size of the array.
    // Then you need to divide it by the size of one element.
    // It works because every item in the array has the same type, and as such the same size.
    for (int index = 0; index < size; index++) {
        const Tuple tuple = arrayOfSelections[index];
        displaySelectedBits(tuple.n, tuple.m);
    }
    return EXIT_SUCCESS;
}