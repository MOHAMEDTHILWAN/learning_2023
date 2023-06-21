#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimePeriod() {
    struct Time tp;
    printf("Enter hours: ");
    scanf("%d", &tp.hours);
    printf("Enter minutes: ");
    scanf("%d", &tp.minutes);
    printf("Enter seconds: ");
    scanf("%d", &tp.seconds);
    return tp;
}

int calculateDifference(struct Time tp1, struct Time tp2) {
    int totalSeconds1 = tp1.hours * 3600 + tp1.minutes * 60 + tp1.seconds;
    int totalSeconds2 = tp2.hours * 3600 + tp2.minutes * 60 + tp2.seconds;
    return abs(totalSeconds1 - totalSeconds2);
}

int main() {
    struct Time time1, time2;

    printf("~~~~~Enter the first time period~~~~~~\n");
    time1 = getTimePeriod();

    printf("~~~~~Enter the second time period~~~~~\n");
    time2 = getTimePeriod();

    int difference = calculateDifference(time1, time2);

    printf("The difference between the two time periods is %d seconds.\n", difference);

    return 0;
}
