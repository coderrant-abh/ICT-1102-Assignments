#include <stdio.h>

int main(void)
{
    int n, i;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nFactors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d  ", i);
        }
    }

    printf("\n\n");

    return 0;
}