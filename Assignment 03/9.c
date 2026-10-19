/* Write a C program to print all perfect numbers between
             given interval using functions    */
#include <stdio.h>

int isPerfect(int n);

int main(void)
{
    int start, end, i;
    
    printf("\nEnter the interval (Start & End): ");
    scanf("%d %d", &start, &end);
    
    printf("\nPerfect numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }

    printf("\n\n");
    
    return 0;
}

int isPerfect(int n) {
    
    int i, sum = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n && n > 1;
}