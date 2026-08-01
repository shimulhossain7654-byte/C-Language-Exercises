#include <stdio.h>
int main ()
{
    int h,m;
    float s;
    printf("Enter hours: ");
    scanf("%i", &h);
    printf("Enter minutes: ");
    scanf("%i", &m);
    printf("Enter seconds: ");
    scanf("%f", &s);
    s = h*3600 + s;
    s += m*60;
    printf("Result in second: %f \n",s);
    printf("Enter second: ");
    scanf("%f", &s);
    h = s / 3600;
    s = (s / 3600) - (int)(s / 3600);
    s = s * 3600;
    m = (s / 60);
    s = (s / 60) - (int)(s / 60);
    s = s * 60;
    printf("%i hourse %i minutes %f second\n",h,m,s);
    return 0;
}