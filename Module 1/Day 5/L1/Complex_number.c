#include <stdio.h>

// Structure for a complex number
struct Complex 
{
    double real;
    double imaginary;
};

// Function to read a complex number from the user
struct Complex readComplex() 
{
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%lf", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imaginary);
    return c;
}

// Function to write a complex number to the console
void writeComplex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
    result.imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    return result;
}

int main() 
{
    struct Complex num1, num2, sum, product;
    
    // Read the first complex number
    printf("Enter the first complex number of real and imaginary\n");
    num1 = readComplex();
    
    // Read the second complex number
    printf("Enter the second complex number of real and imaginary\n");
    num2 = readComplex();
    
    // Add the complex numbers
    sum = addComplex(num1, num2);
    
    // Multiply the complex numbers
    product = multiplyComplex(num1, num2);
    
    printf("Sum of the complex numbers: ");
    writeComplex(sum);
    
    printf("Product of the complex numbers: ");
    writeComplex(product);
    
    return 0;
}
