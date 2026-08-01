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