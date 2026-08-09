/*
16. Let u = 1 be the initial velocity, f = 2 be the acceleration. Compute the velocity
    v = u + ft and the distance travelled s = ut + 1/2 ft² when t’s values are 0, 1, 2, and
    3. The output of the program will be two horizontal bar charts, one for the velocity
    and the other for the distance, where you will use * for each unit in the bar chart.
*/

#include <stdio.h>
int main ()
{
    int u = 1, f = 2, t, v, s;
    printf ("  V   D\n");
    t = 0;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 1;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 2;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    t = 3;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;
    printf ("* %i   %i\n", v, s);
    return 0;
}
