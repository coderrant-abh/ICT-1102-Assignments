// Write a C program to find sum of all even or odd numbers in given range using recursion.
#include <stdio.h>

int sum(int start, int end, int choice);

int main(void)
{
    int start, end, choice;

    printf("\nEnter the range (Start & End): ");
    scanf("%d %d", &start, &end);

    printf("\nTo print sum of Even or Odd, Choose between 0 & 1.");
    printf("\nEnter (0 for even) or (1 for odd): ");
    scanf("%d", &choice);

    printf("\nSum = %d\n\n", sum(start, end, choice));

    return 0;
}

int sum(int start, int end, int choice) {
    
    if (start > end)
        return 0;

    if (start % 2 == choice) {
        return start + sum(start + 1, end, choice);
    }

    return sum(start + 1, end, choice);
}