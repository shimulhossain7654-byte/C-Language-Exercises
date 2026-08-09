/*
5. Take a temperature as input in Fahrenheit, convert it into Celsius and give output.
Then, take another temperature in Celsius, convert and output it in Fahrenheit. Use
formulas f = 9 × c/5 + 32 and c = (f − 32)/9, where f and c are the Fahrenheit
and Celsius temperatures respectively. Use appropriate data types in your program.
*/

#include <stdio.h>

int main()
{
    float f;
    float c;

    // Fahrenheit to Celsius
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("Converted Celsius temperature: %f", c);

    // Celsius to Fahrenheit
    printf("\nEnter Celsius temperature: ");
    scanf("%f", &c);

    f = 9 * c / 5 + 32;
    printf("Converted Fahrenheit temperature: %f", f);

    return 0;
}
