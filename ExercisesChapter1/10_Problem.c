/*
10. For two linear simultaneous equations ax + by = c and px + qy = r, take a, b, c, p, q,
    and r as input. Then, solve the two equations and give the values of x and y as output.
    You can use the two formulas x = (cq − br)/(aq − bp) and y = (cp − ar)/(bp − aq)
    in your program. Also, assume that aq ≠ bp for the input values.
*/

#include <stdio.h>
int main ()
{
    float a,b,c,p,q,r,x,y;
    printf ("Enter a: ");
    scanf ("%f", &a);
    printf ("Enter b: ");
    scanf ("%f", &b);
    printf ("Enter c: ");
    scanf ("%f", &c);
    printf ("Enter p: ");
    scanf ("%f", &p);
    printf ("Enter q: ");
    scanf ("%f", &q);
    printf ("Enter r: ");
    scanf ("%f", &r);
    x = (c*q - b*r)/(a*q - b*p);
    y = (c*p - a*r)/(b*p - a*q);
    printf ("The value of x: %f", x);
    printf ("\nThe value of y: %f \n", y);
    c = a*x + b*y;
    r = p*x + q*y;
    printf ("\nSolution of 1st equation, c: %f", c);
    printf ("\nSolution of 2nd equation, r: %f", r);
    return 0;
}
