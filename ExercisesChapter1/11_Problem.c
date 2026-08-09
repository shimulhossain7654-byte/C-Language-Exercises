/*
12. Compute the value of the expression below. For this, use only one arithmetic
    operator and one assignment operator in each statement. Also, use the least number
    of variables in the program. Give the final result as the output.

    (5 + 6 × 9/3 − (3 + 8 × (−(1 + 2)))) + 3 × (5 + 6)
*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int a,d,n;
    float s;
    printf ("Enter a:");
    scanf ("%i",&a);
    printf ("Enter d:");
    scanf ("%i",&d);
    printf ("Enter n:");
    scanf ("%i",&n);
    s = 0.5 * n * (2 * a + ((n - 1) * d));
    printf ("a + b + ... + t = %f",s);
    return 0;
}
