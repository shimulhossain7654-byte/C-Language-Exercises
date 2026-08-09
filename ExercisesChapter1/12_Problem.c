/*
12. Compute the value of the expression below. For this, use only one arithmetic
    operator and one assignment operator in each statement. Also, use the least number
    of variables in the program. Give the final result as the output.

    (5 + 6 × 9/3 − (3 + 8 × (−(1 + 2)))) + 3 × (5 + 6)
*/

#include <stdio.h>
int main ()
{
    float n,m,p;
    m = 6*9;
    m = m/3;
    p = 5+6;
    p = p*3;
    n = 1+2;
    n = -n;
    n = n*8;
    n = 3+n;
    n = 5-n;
    n = m+n+p;
    printf ("Result %f",n);
    return 0;
}
