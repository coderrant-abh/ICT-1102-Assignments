#include <stdio.h>

int main(void)
{
    float angle1, angle2, angle3;

    printf("\nTo find out the third angle of a Triangle:- \n\nEnter the 1st angle value: ");
    scanf("%f", &angle1);

    printf("Enter the 2nd angle value: ");
    scanf("%f", &angle2);

    angle3 = 180.0 - (angle1 + angle2);
    printf("\nHere's the 3rd angle value: %.2f\n\n", angle3);

    return 0;
}