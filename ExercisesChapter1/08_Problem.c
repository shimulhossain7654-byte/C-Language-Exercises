/*
8. Define three variables a, b, and c, and initialise them with different values. Next,
   define an additional variable and use it in assignments such that after all the
   assignments a’s value goes to b, b’s value goes to c, and c’s value goes to a. Write
   the program in another way, where you will not use any additional variable. Rather
   you will just use addition and subtraction and still get the same task performed.
*/

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
