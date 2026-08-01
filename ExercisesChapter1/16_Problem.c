#include <stdio.h>
int main ()
{
    int u = 1, f = 2, t, v, s;
    printf ("  V   D\n");
    t = 0;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 1;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 2;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 3;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    return 0;
}