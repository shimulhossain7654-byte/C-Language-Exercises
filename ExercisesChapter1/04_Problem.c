#include <stdio.h>
int main () 
{
    int a, b, sum, diff, product, remainder;
    float quotient;
    printf ("Enter first number: ");
    scanf ("%i", &a);
    printf ("Enter second number: ");
    scanf ("%i", &b);

    //sum
    printf ("Sum = %d", sum = a + b);
    //Difference
    printf ("\nDifference = %d", diff = a - b);
    //Product
    printf ("\nProduct = %d", product = a * b);
    //Quotient
    printf ("\nQuotient = %f",  quotient = (float)a / b); /*Explicit data type*/
    //Remainder
    printf ("\nRemainder = %d", remainder = a % b);
    return 0;
}