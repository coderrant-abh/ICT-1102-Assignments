#include <stdio.h>
#define PI_VALUE 3.14159265359f

int main(void)
{
    float radius, diameter, area, circumference;

    printf("\nEnter the radius: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    area = PI_VALUE * (radius * radius);
    circumference = 2 * PI_VALUE * radius;

    printf("\nDiameter of the circle     : %.3f\n", diameter);
    printf("Area of the circle         : %.3f\n", area);
    printf("Circumference of the circle: %.3f\n\n", circumference);

    return 0;
}