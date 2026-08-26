#include <stdio.h>

int main(void)
{
    float sub1, sub2, sub3, sub4, sub5, total, average, percentage;

    printf("\nEnter marks of five subjects: ");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = total / 5;
    percentage = (total / 500) * 100;

    printf("\nTotal      = %.2f\n", total);
    printf("Average    = %.2f\n", average);
    printf("Percentage = %.2f%%\n\n", percentage);

    return 0;
}