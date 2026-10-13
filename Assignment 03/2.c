// Write a C program to find diameter, circumference and area of circle using functions.
#include <stdio.h>
#define PI_VALUE 3.14159265358979323846f

float diameter(float);
float circumference(float);
float area(float);

int main(void)
{
    float radius;
    
    printf("Enter radius of circle: ");
    scanf("%g", &radius);
    
    printf("\nDiameter = %g\n", diameter(radius));
    printf("Circumference = %g\n", circumference(radius));
    printf("Area = %g\n", area(radius));
    
    return 0;
}

float diameter(float r) {
    return 2 * r;
}

float circumference(float r) {
    return 2 * PI_VALUE * r;
}

float area(float r) {
    return PI_VALUE * r * r;
}