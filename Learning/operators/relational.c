#include <libc.h>

int main(void) {
    //RELATIONAL OPERATORS:
    int a, b;

    printf("\n");

    printf("Enter operand A (int): ");
    scanf("%d", &a);
    printf("Enter operand B (int): ");
    scanf("%d", &b);
    printf("\n");

    printf("A == B --> %d\n", a == b);
    printf("A != B --> %d\n", a != b);
    printf("A > B  --> %d\n", a > b);
    printf("A < B  --> %d\n", a < b);
    printf("A >= B --> %d\n", a >= b);
    printf("A <= B --> %d\n", a <= b);
    printf("\n");

    char x = 'a';
    char y = 'z';

    printf("X = %c\n", x);
    printf("Y = %c\n", y);
    printf("\n");

    printf("X == Y --> %d\n", x == y);
    printf("X != Y --> %d\n", x != y);
    printf("X > Y  --> %d\n", x > y);
    printf("X < Y  --> %d\n", x < y);
    printf("X >= Y --> %d\n", x >= y);
    printf("X <= Y --> %d\n", x <= y);

    //We can use relational operators on characters to also get if one character is earlier in the alphabet than the other and so on...

    return EXIT_SUCCESS;
}