// Write a C program to display all array elements using recursion.
#include <stdio.h>

void display(int a[], int n, int i);

int main(void)
{
    int a[100], n, i;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nArray elements: ");
    display(a, n, 0);

    printf("\n\n");

    return 0;
}

void display(int a[], int n, int i) {
    if (i == n) {
        return;
    }

    printf("%d ", a[i]);

    display(a, n, i + 1);
}