#include <stdio.h>
void swap(void* ptr1, void* ptr2, size_t size) {
    char* p1 = (char*)ptr1;
    char* p2 = (char*)ptr2;

    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int a, b;
    printf("Enter two integer values: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x, y;
    printf("Enter two double values: ");
    scanf("%lf %lf", &x, &y);
    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %f, y = %f\n", x, y);

    char c1, c2;
    printf("Enter two characters: ");
    scanf(" %c %c", &c1, &c2);
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
