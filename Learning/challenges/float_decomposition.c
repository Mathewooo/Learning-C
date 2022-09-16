#include <stdio.h>

typedef struct {
    int integer;
    float fraction;
} Tuple;

Tuple decompose(const float *num);

int main(void) {
    float number;
    printf("Enter a floating point number: ");
    scanf("%f", &number);
    Tuple result = decompose(&number);
    printf("Integer: %d, Fraction: %.2f\n", result.integer, result.fraction);
    return 0;
}

Tuple decompose(const float *const num) {
    Tuple parts;
    const int int_part = (int) *num;
    parts.integer = int_part;
    parts.fraction = *num - (float) int_part;
    return parts;
}
