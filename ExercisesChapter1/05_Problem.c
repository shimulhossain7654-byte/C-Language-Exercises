#include <stdio.h>
int main () 
{
    int f;
    float c;
    //Farenheit to Celsius
    printf ("Enter Farenheit temperature: ");
    scanf ("%i", &f);
    printf ("Converted Celsius temperature: %f", c = (float)(f - 32)*5 / 9);
    
    //Celsius to Farenheit
    printf ("\nEnter Celsius temperature: ");
    scanf ("%f", &c);
    printf ("Converted Farenheit temperature: %i", f = 9 * c / 5 + 32);
    return 0;
}