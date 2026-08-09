/*
11. If the first term of an arithmetic series is a and the common difference is d, then the
    second term is b = a + d, the nth term is t = a + (n − 1)d, and the sum of the first
    n terms is s = 1/2 n{2a + (n − 1)d}. Take a, d, and n of an arithmetic series as input
    and give the output in the format of a + b + . . . + t = s.
*/

#include <stdio.h>

int main()
{
    int a, b, d, n, t, s;

    printf("Enter a: ");
    scanf("%i", &a);

    printf("Enter d: ");
    scanf("%i", &d);

    printf("Enter n: ");
    scanf("%i", &n);

    b = a + d;
    t = a + (n - 1) * d;
    s = n * (2 * a + (n - 1) * d) / 2;

    printf("a + b + ... + t = %i\n", s);

    return 0;
}
