#include <stdio.h>
int main ()
{
    int a,b,c,n;
    printf ("Enter a: ");
    scanf ("%i", &a);
    printf ("Enter b: ");
    scanf ("%i", &b);
    printf ("Enter c: ");
    scanf ("%i", &c);
    n = a;
    a = b;
    b = c;
    c = n;
    printf ("a: %i", a);
    printf ("\nb: %i", b);
    printf ("\nc: %i", c);
    return 0;
}