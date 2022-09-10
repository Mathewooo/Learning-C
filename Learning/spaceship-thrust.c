#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NONE = 0, LOW = 5, MEDIUM = 9, HIGH = 12, MAXIMUM = 20
} THRUST_LEVELS;

int main(void) {
    THRUST_LEVELS thrusts[4] = {NONE, MAXIMUM, MEDIUM, LOW};
    for (int index = 0; index < 4; index++) {
        const char *str;
        switch (thrusts[index]) {
            case NONE:
                str = "Ready to go level!\n";
                break;
            case LOW:
                str = "Travelling to the deep space!\n";
                break;
            case MEDIUM:
                str = "Entering to the ionosphere!\n";
                break;
            case HIGH:
                str = "Leaving ionosphere!\n";
                break;
            case MAXIMUM:
                str = "Take off level!\n";
                break;
        }
        printf("(Thrust level is: %d), %s", thrusts[index], str);
        if (index == 3) printf("Bye bye spaceship!");
    }
    return EXIT_SUCCESS;
}