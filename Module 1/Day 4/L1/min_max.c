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

    int min = numbers[0]; // Initialize min with the first element
    int max = numbers[0]; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    free(numbers);

    return 0;
}
