/*
5. Take a temperature as input in Fahrenheit, convert it into Celsius and give output.
   Then, take another temperature in Celsius, convert and output it in Fahrenheit. Use
   formulas f = 9 × c/5 + 32 and c = (f − 32)/9, where f and c are the Fahrenheit
   and Celsius temperatures respectively. Use appropriate data types in your program.
*/

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
