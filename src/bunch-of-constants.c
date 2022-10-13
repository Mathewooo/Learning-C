#include <stdlib.h>
#include <printf.h>

//FOR help on format specifiers: https://cplusplus.com/reference/cstdio/printf/

int main(void) {
    const int moonLanding = 0x7b1;
    const double speedOfLight = 299792458.;
    const double pi = 3.142;
    const unsigned hexaDead = 0xDEADU;
    const unsigned hexaSecret = 0xFAFA;

    printf("Moon landing:\n %10d\n %010d\n\n", moonLanding, moonLanding);
    printf("Speed of light:\n %.0f\n %.3e\n\n", speedOfLight, speedOfLight);
    printf("Pi:\n %.2f\n %+.1e\n\n", pi, pi);
    printf("Hexa dead:\n 0x%X\n %6u\n\n", hexaDead, hexaDead);
    printf("Hexa secret:\n %x\n\n", hexaSecret);

    return EXIT_SUCCESS;
}