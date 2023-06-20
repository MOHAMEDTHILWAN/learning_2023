#include <stdio.h>
int SumAlternateElements(int arr[], int size)
 {
    int total = 0;
    for (int i = 0; i < size; i += 2)
     {
        total += arr[i];
    }
    return total;
}
int main()
 {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &array[i]);
    }
    int result = SumAlternateElements(array, size);
    printf("Sum of alternate elements: %d\n", result);
    return 0;
}
