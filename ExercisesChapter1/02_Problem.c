/*
2. Write a program to give output like the design shown below. Write more programs
   to create such other designs for various letters and symbols.
*/

#include <stdio.h>
int main ()
{
    // The pattern is showed below.
    char n = '*';
    printf ("\n%c  %c  %c\n",n,n,n);
    printf (" %c %c %c\n",n,n,n);
    printf ("  %c%c%c\n",n,n,n);
    printf (" %c %c %c\n",n,n,n);
    printf ("%c  %c  %c\n",n,n,n);

    // Similar pattern but using entered symbol
    char m;
    printf ("Enter your symbol: ");
    scanf ("%c", &m);
    printf ("%c  %c  %c\n",m,m,m);
    printf (" %c %c %c\n",m,m,m);
    printf ("  %c%c%c\n",m,m,m);
    printf (" %c %c %c\n",m,m,m);
    printf ("%c  %c  %c\n",m,m,m);

    return 0;
}
