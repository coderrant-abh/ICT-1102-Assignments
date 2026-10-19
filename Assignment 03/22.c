// Write a C program to display all array elements using recursion.
#include <stdio.h>

void display(int arr[], int n, int i);

int main(void)
{
    int arr[100], n, i;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements: ");
    display(arr, n, 0);

    printf("\n\n");

    return 0;
}

void display(int arr[], int n, int i) {
    if (i == n) {
        return;
    }

    printf("%d ", arr[i]);

    display(arr, n, i + 1);
}