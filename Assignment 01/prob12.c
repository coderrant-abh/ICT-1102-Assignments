#include <stdio.h>
#include <math.h>

int main(void)
{
    double number, squareRoot;

    printf("\nEnter a number: ");
    scanf("%lf", &number);

    squareRoot = sqrt(number);

    printf("\nSquare root = %.5f\n\n", squareRoot);

    return 0;
}