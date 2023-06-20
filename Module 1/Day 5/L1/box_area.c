#include <stdio.h>

struct Box
{
    double length;
    double width;
    double height;
};

int main() {
    // Declaration of a box structure variable
    struct Box myBox;
    
    //pointer to the box structure
    struct Box* boxPtr = &myBox;
    
    // Enter the dimensions of the box:

    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->length));
    
    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));
    
    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));
    
    // Calculate the volume using the structure pointer with the indirection (*) and dot (.) operators
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    
    // Calculate the surface area using the structure pointer with the arrow (->) operator and dot (.) operator
    double surfaceArea = boxPtr->length * boxPtr->width * boxPtr->height;
    
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}
