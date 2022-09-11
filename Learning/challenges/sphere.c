#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("\n===SPHERE===\n");

    const double pi = 3.14159265359;
    double radius;

    printf("Enter the radius of a sphere: ");
    scanf("%lf", &radius);
    printf("\n");

    const double surface = 4 * pi * radius * radius;
    const double volume =  4.0 / 3 * pi * radius * radius * radius;

    printf("DECIMAL\n");
    printf("radius:  %.2f\n", radius);
    printf("surface: %.2f\n", surface);
    printf("volume:  %.2f\n", volume);
    printf("\n");

    printf("SCIENTIFIC\n");
    printf("radius:  %.3e\n", radius);
    printf("surface: %.3e\n", surface);
    printf("volume:  %.3e\n", volume);
    printf("\n");

    return EXIT_SUCCESS;
}