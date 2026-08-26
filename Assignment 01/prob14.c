#include <stdio.h>

int main(void)
{
    float base, height, area;

    printf("\nEnter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("\nArea of the triangle = %.3f\n\n", area);

    return 0;
}