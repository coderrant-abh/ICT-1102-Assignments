// Write a C program to find maximum and minimum between two numbers using functions.

#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int main(void)
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("\nMaximum = %d\n", max(x, y));
    printf("Minimum = %d\n", min(x, y));
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;

    return b;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    
    return b;
}