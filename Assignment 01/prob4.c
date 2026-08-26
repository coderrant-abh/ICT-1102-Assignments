#include <stdio.h>

int main(void)
{
    float length, breadth;

    printf("\nEnter the length: ");
    scanf("%f", &length);

    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    printf("\nThe perimeter: %.3f\n\n", 2 * (length + breadth));

    return 0;
}