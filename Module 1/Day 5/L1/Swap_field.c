#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    struct Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    struct Point point1, point2;

    // Input for point1
    printf("Enter coordinates for point 1:\n");
    printf("x: ");
    scanf("%d", &point1.x);
    printf("y: ");
    scanf("%d", &point1.y);

    // Input for point2
    printf("Enter coordinates for point 2:\n");
    printf("x: ");
    scanf("%d", &point2.x);
    printf("y: ");
    scanf("%d", &point2.y);

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields using pointers
    swapPoints(&point1, &point2);

    printf("After swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
