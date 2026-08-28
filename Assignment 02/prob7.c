#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;

    printf("\nEnter the number: ");
    scanf("%d", &n);
    
    i = 0;
    while (i <= n) {
        if (i%2 == 0) {
            sum = sum + i;
        }
        
        i++;
    }

    printf("\nSummation (even num. form 1 to %d): %d\n\n", n, sum);

    return 0;
}