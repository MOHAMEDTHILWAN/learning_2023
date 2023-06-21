#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid size. Exiting...\n");
        return 1;
    }

    int* numbers = (int*)malloc(size * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    int sumEven = 0;
    int sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", difference);

    free(numbers);

    return 0;
}
