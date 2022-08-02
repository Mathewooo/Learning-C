//DATA TYPES AND VARIABLES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

//!!! Check Basics folders for more information

typedef enum { //every enum value is as int, first value starts from 0, (you can also set enum value's number with '=' as shown here)
    TEA = 10, COFFEE = 20, JUICE = 3, BEER
} Menu;

int main(void) {
    //INTEGERS:
    unsigned int students = 25U; //unsigned can only be positive or equal to zero
    unsigned long int worldPopulation = 7801235945UL; //unsigned can only be positive or equal to zero
    printf("%12u | Students in the class\n", students);
    printf("%12lu | World population now\n", worldPopulation);
    uint8_t count = UINT8_MAX;
    printf("%12u | Max value of 8 bit integer\n", count);
    count += 1;
    printf("%12u | Count of max value of 8 bit integer +1 results in (OVERFLOW)\n", count);
    printf("%12d | INT32_MIN\n", INT32_MIN);
    printf("%12d | INT32_MAX\n", INT32_MAX);
    printf("%12u | UINT32_MAX\n", UINT32_MAX);
    uint8_t count2 = 0xFF;
    printf("%12u | Count2 in hexadecimal format\n", count2);

    //FLOATS:
    double decimalDigits = 1.2341255343;
    double worldPop = 7.801E9;
    double plankConstant = 6.626E-34;

    printf("%12.1f | 1 decimal digit\n", decimalDigits);
    printf("%12.3f | 3 decimal digits\n", decimalDigits);
    printf("%12.1f | World population, decimal, 1 digit of precision\n", worldPop);
    printf("%12.1e | World population, scientific, 1 digit of precision\n", worldPop);
    printf("%12.3e | World population, scientific, 3 digits of precision\n", worldPop);
    printf("%12.1E | Plank constant, scientific, 1 digit of precision\n", plankConstant);
    printf("%12.3E | Plank constant, scientific, 3 digits of precision\n", plankConstant);

    //CHARACTERS:
    char c = 'A';
    printf("char c: %d\n", c);
    printf("char c (ASCII coded): %c\n", c);

    c = 0x42; //0x42 = "B" - in ASCII table
    printf("char c (ASCII coded): %c\n", c);

    printf("Input char: ");
    c = getchar();
    printf("You entered %c\n", c);

    //BOOLEANS:
    bool a = true;
    bool b = false;
    printf("bool a: %d\n", a);
    printf("bool b: %d\n", b);

    //ENUMS AND TYPEDEF: //typedef is very useful to make better code readability by reducing verbosity
    Menu matthew = COFFEE;
    printf("Matthew ordered... %d\n", matthew);
    Menu richard = BEER;
    printf("Richard ordered... %d\n", richard);

    return EXIT_SUCCESS;
}
