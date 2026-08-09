/*
10. For two linear simultaneous equations ax + by = c and px + qy = r, take a, b, c, p, q,
    and r as input. Then, solve the two equations and give the values of x and y as output.
    You can use the two formulas x = (cq − br)/(aq − bp) and y = (cp − ar)/(bp − aq)
    in your program. Also, assume that aq ≠ bp for the input values.
*/

#include <stdio.h>

int main()
{
    float a, b, c, p, q, r;
    float x, y;
    float check1, check2;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    printf("Enter p: ");
    scanf("%f", &p);

    printf("Enter q: ");
    scanf("%f", &q);

    printf("Enter r: ");
    scanf("%f", &r);

    x = (c * q - b * r) / (a * q - b * p);
    y = (c * p - a * r) / (b * p - a * q);

    printf("\nThe value of x: %.2f", x);
    printf("\nThe value of y: %.2f\n", y);

    // Checking the solutions
    check1 = a * x + b * y;
    check2 = p * x + q * y;

    printf("\nSolution of 1st equation: %.2f", check1);
    printf("\nSolution of 2nd equation: %.2f\n", check2);

    return 0;
}
