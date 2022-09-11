#include <stdio.h>
#include <stdlib.h>

typedef enum {
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
} WeekDays;

int main(void) {
    printf("Monday-Sunday: %d-%d\n", MONDAY, SUNDAY);

    WeekDays weekDay;
    printf("Enter a week day: ");
    scanf("%u", &weekDay);

    switch (weekDay) {
        case MONDAY:
            printf("Day %d is MONDAY\n", weekDay);
            break;
        case TUESDAY:
            printf("Day %d is TUESDAY\n", weekDay);
            break;
        case WEDNESDAY:
            printf("Day %d is WEDNESDAY\n", weekDay);
            break;
        case THURSDAY:
            printf("Day %d is THURSDAY\n", weekDay);
            break;
        case FRIDAY:
            printf("Day %d is FRIDAY\n", weekDay);
            break;
        case SATURDAY:
            printf("Day %d is SATURDAY\n", weekDay);
            break;
        case SUNDAY:
            printf("Day %d is SUNDAY\n", weekDay);
            break;
        default:
            printf("Day has unknown value\n");
            break;
    }

    return EXIT_SUCCESS;
}