#include <stdio.h>

int main(void)
{
    float length, breadth;

    printf("\nEnter the length: ");
    scanf("%f", &length);

    printf("Enter the breadth: ");
    scanf("%f", &breadth);

    printf("\nArea of the Rectangle: %.3f\n", length * breadth);
    printf("Perimeter of the Rectangle: %.3f\n\n", 2 * (length + breadth));

    return 0;
}