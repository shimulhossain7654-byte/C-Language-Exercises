/*
6. Take hours, minutes, and seconds as input and convert them into seconds and give
output. Also, take the seconds as input, and convert them into hours, minutes, and
seconds, and give output. For these, use self referential and compound assignments.
*/

#include <stdio.h>

int main()
{
    int h, m;
    float s;

    printf("Enter hours: ");
    scanf("%i", &h);

    printf("Enter minutes: ");
    scanf("%i", &m);

    printf("Enter seconds: ");
    scanf("%f", &s);

    s += h * 3600;
    s += m * 60;

    printf("Result in seconds: %f\n", s);

    printf("Enter seconds: ");
    scanf("%f", &s);

    h = s / 3600;

    s = (s / 3600) - (int)(s / 3600);
    s *= 3600;

    m = s / 60;

    s = (s / 60) - (int)(s / 60);
    s *= 60;

    printf("%i hours %i minutes %f seconds\n", h, m, s);

    return 0;
}
