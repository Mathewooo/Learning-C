//DATA TYPES AND VARIABLES
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//__attribute__((unused)) - MEANS THAT CURRENT VARIABLE WON'T BE USED IN A PROGRAM

__attribute__((unused)) int girls = 12;
__attribute__((unused)) unsigned int girl = 0; //unsigned can only be positive or equal to zero

//!!! Check Integer-Basics folder for more information

int main(void) {
    unsigned int students = 25U;
    unsigned long int worldPopulation = 7801235945UL;
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
    return EXIT_SUCCESS;
}