#include <stdio.h>
int var = 2; //Global variable
int main () 
{
    printf ("%i\n", var * var); /*Output will be 4*/
    int var = 3;
    {
        int var = 5;
        printf ("%i\n", var * var); /*Output will be 25*/
    }
    printf ("%i\n", var * var); /*Output will be 9*/
    return 0;
}