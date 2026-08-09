/*
16. Let u = 1 be the initial velocity, f = 2 be the acceleration. Compute the velocity
    v = u + ft and the distance travelled s = ut + 1/2 ft² when t’s values are 0, 1, 2, and
    3. The output of the program will be two horizontal bar charts, one for the velocity
    and the other for the distance, where you will use * for each unit in the bar chart.
*/

#include <stdio.h>

int main()
{
    int u = 1, f = 2, t, v, s;

    // t = 0
    t = 0;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;

    printf("\nVelocity at t = 0: ");
    printf("*");

    printf("\nDistance at t = 0: ");

    // t = 1
    t = 1;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;

    printf("\nVelocity at t = 1: ");
    printf("***");

    printf("\nDistance at t = 1: ");
    printf("**");

    // t = 2
    t = 2;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;

    printf("\nVelocity at t = 2: ");
    printf("*****");

    printf("\nDistance at t = 2: ");
    printf("******");

    // t = 3
    t = 3;
    v = u + f * t;
    s = u * t + 0.5 * f * t * t;

    printf("\nVelocity at t = 3: ");
    printf("*******");

    printf("\nDistance at t = 3: ");
    printf("************");

    return 0;
}
