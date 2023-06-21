#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertStringToIntAtoi(const char* str) {
    return atoi(str);
}

int convertStringToIntStrtol(const char* str) {
    char* endptr;
    long int result = strtol(str, &endptr, 10);
    
    if (*endptr != '\0' && *endptr != '\n') {
        printf("Invalid input: %s\n", str);
        return 0;
    }

    return (int)result;
}

int main() {
    char str[100];

    printf("Enter a string representing an integer: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    // Using atoi
    int resultAtoi = convertStringToIntAtoi(str);
    printf("Using atoi: %d\n", resultAtoi);

    // Using strtol
    int resultStrtol = convertStringToIntStrtol(str);
    printf("Using strtol: %d\n", resultStrtol);

    return 0;
}
