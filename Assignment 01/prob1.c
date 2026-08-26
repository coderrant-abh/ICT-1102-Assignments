#include <stdio.h>

int main(void)
{
    char character;
    int integer;
    float floatNumber;
    double doubleNumber;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a character: ");
    scanf(" %c", &character); // Skip leading whitespace characters before reading a character

    printf("Enter a float number: ");
    scanf("%f", &floatNumber);

    printf("Enter a double number: ");
    scanf("%lf", &doubleNumber);

    printf("\n--You Entered--\n");
    printf(" Character: %c\n", character);
    printf(" Integer: %d\n", integer);
    printf(" Float: %f\n", floatNumber);
    printf(" Double: %lf\n", doubleNumber);

    return 0;
}
