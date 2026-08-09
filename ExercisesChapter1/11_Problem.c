/*
11. If the first term of an arithmetic series is a and the common difference is d, then the
    second term is b = a + d, the nth term is t = a + (n − 1)d, and the sum of the first
    n terms is s = 1/2 n{2a + (n − 1)d}. Take a, d, and n of an arithmetic series as input
    and give the output in the format of a + b + . . . + t = s.
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
