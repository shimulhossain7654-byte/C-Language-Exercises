#include <stdio.h>
int main () 
// int const month = 30, year = 12;
{
    int m,y;
    float d;
    //First date
    int m1, y1;
    float d1, sub;
    printf ("Enter 1st date's day: ");
    scanf ("%f", &d1);
    printf ("Enter 1st date's month: ");
    scanf ("%i", &m1);
    printf ("Enter 1st date's year: ");
    scanf ("%i", &y1);
    //Second date
    int m2, y2;
    float d2;
    printf ("Enter 2nd date's day: ");
    scanf ("%f", &d2);
    printf ("Enter 2nd date's month: ");
    scanf ("%i", &m2);
    printf ("Enter 2nd date's year: ");
    scanf ("%i", &y2);
    sub = (y1 - y2)*360 + (m1 - m2)*60 + (d1 - d2);
    y = (sub / 360);
    sub = (sub / 360) - (int)(sub / 360);
    sub = sub * 360;
    m = (sub / 30);
    sub = (sub / 30) - (int)(sub / 30);
    d = sub * 30;
    printf ("Day: %f Month: %i Year: %i", d, m, y);
    return 0;
}