#include <stdio.h>
// Count set bits
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
//  Get the total number of bits
int getTotalSetBits(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%x", &array[i]);
    }

    int result = getTotalSetBits(array, size);
    printf("Total number of set bits: %d\n", result);// total number of bits

    return 0;
}
