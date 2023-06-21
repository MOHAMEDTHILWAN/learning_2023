#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];
    int sum = 0;
    float average;

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
