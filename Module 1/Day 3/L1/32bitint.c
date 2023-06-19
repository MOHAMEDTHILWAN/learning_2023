#include <stdio.h>

void printBits(unsigned int num) {
    int size = sizeof(unsigned int) * 8; // Number of bits are using in an unsigned int

    for (int i = size - 1; i >= 0; i--)
     {
        unsigned int mask = 1u << i;
        unsigned int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits: ");
    printBits(num);

    return 0;
}
