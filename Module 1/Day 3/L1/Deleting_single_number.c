#include <stdio.h>

int findLargestNumber(int num)
 {
    int largest = -1;
    // Convert the number to a string for easier manipulation
    char numStr[5];
    sprintf(numStr, "%d", num);
    // Iterate over all possible positions to remove a digit
    for (int i = 0; i < 4; i++)
     {
        // Create a temporary string to store the modified number
        char tempStr[5];
        // Copy all digits except the one at position i
        for (int j = 0, k = 0; j < 4; j++)
         {
            if (j != i) 
            {
                tempStr[k++] = numStr[j];
            }
        }
        tempStr[4] = '\0'; // Add null-terminating character
        // Convert the modified string back to an integer
        int tempNum = atoi(tempStr);

        // Update the largest number if the modified number is greater
        if (tempNum > largest) 
        {
            largest = tempNum;
        }
    }

    return largest;
}

int main()
 {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}
