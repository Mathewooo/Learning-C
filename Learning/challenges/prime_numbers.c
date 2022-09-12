#include <stdio.h>
#include <stdlib.h>

int is_prime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    int lower, upper;

    printf("Please enter lower limit: ");
    scanf("%d", &lower);

    printf("Please enter upper limit: ");
    scanf("%d", &upper);

    const uint16_t MAX = 1000;

    if (!(lower > 1 && upper < MAX)) goto error;
    else {
        for (int index = upper;; index++)
            if (is_prime(index)) {
                printf("\nFirst prime number above lower limit is:\n %d\n", index);
                break;
            }
        for (int index = 2; index < upper; index++) {
            if (index == 2) printf("All prime numbers under upper limit:\n");
            char comma = index + 1 == upper ? '.' : ',';
            if (is_prime(index)) printf("%d%c", index, comma);
        }
    }

    printf("\n");

    return EXIT_SUCCESS;

    error:
    printf("\n!ERROR!\n");
    return EXIT_FAILURE;
}

