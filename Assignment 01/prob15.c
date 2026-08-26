#include <stdio.h>
#include <math.h>

int main(void)
{
    float side, area;

    printf("\nEnter the side length: ");
    scanf("%f", &side);

    area = (sqrt(3) / 4) * side * side;

    printf("\nArea of the equilateral triangle = %.3f\n\n", area);

    return 0;
}