#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    double result;

    printf("\nEnter base, (x)    : ");
    scanf("%d", &x);

    printf("Enter exponent, (y): ");
    scanf("%d", &y);

    result = pow(x, y);

    printf("\n(%d ^ %d) = %.0lf\n\n", x, y, result);

    return 0;
}