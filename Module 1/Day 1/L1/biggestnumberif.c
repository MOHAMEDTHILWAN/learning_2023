#include<stdio.h>
int main()
{
    int a, b, big;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if(a>b)
        big=a;
    else
        big=b;
    printf("\nBiggest number is: %d", big);
    return 0;
}