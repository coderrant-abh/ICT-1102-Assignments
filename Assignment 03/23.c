// Write a C program to find sum of elements of array using recursion.
#include <stdio.h>

int sum(int a[], int n);

int main(void)
{
    int a[100], n, i;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Sum of the array elements = %d\n\n", sum(a, n));

    return 0;
}

int sum(int a[], int n) {
    if (n == 0)
        return 0;

    return a[n - 1] + sum(a, n - 1);
}