// Write a C program to print all even or odd numbers in given range using recursion.
#include <stdio.h>

void printNumbers(int start, int end, int choice);

int main(void)
{
    int start, end, choice;

    printf("\nEnter the range: ");
    scanf("%d %d", &start, &end);

    printf("\nEnter 1 for odd or 2 for even: ");
    scanf("%d", &choice);

    printNumbers(start, end, choice);

    printf("\n\n");

    return 0;
}

void printNumbers(int start, int end, int choice) {
    
    if (start > end)
        return;

    if (choice == 1 && start % 2 != 0)
        printf("%d ", start);

    if (choice == 2 && start % 2 == 0)
        printf("%d ", start);

    printNumbers(start + 1, end, choice);
}