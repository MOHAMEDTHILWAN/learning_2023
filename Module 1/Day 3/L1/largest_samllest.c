#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]) 
{
    int smallestDigit = 9; // Initialize smallestDigit to maximum possible digit
    int largestDigit = 0;  // Initialize largestDigit to minimum possible digit
    int validDigitsFound = 0; // Flag to track if any valid digits are found

    for (int i = 0; i < n; i++)
     {
        int num = numbers[i];

        // Find the smallest and largest digits in the current number
        while (num != 0) 
        {
            int digit = num % 10;
            smallestDigit = (digit < smallestDigit) ? digit : smallestDigit;
            largestDigit = (digit > largestDigit) ? digit : largestDigit;
            num /= 10;
            validDigitsFound = 1; // Setting the flag to indicate valid digits are found
        }
    }

    if (validDigitsFound)
     {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    } else 
    {
        printf("Not Valid\n");
    }
}

int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
     {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}
