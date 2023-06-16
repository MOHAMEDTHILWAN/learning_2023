#include<stdio.h>
int main()
{
    int num1, num2, big;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    big = (num1>num2) ? num1 : num2;
    printf("\nBiggest number is: %d", big);
    return 0;
}