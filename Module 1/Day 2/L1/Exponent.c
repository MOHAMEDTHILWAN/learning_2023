#include <stdio.h>

void printExponent(double value) {
    unsigned long long* ptr = (unsigned long long*)&value;

    // Extracting the exponent bits using bitwise operators
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Printing the exponent in hexadecimal and binary format
    printf("Exponent (Hex): 0x%llX\n", exponent);
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x;

    printf("Enter a double value: ");
    scanf("%lf", &x);

    printExponent(x);

    return 0;
}

