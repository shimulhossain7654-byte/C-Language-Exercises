/*Below is the modified version of the incorrect code.*/
#include <stdio.h>
int main ()
{ 
    float pi;
    pi = (float)22/7;
    {   
        float const pi = 3.1416;
        float lenth = 5.5, width = 3.2, radius = 2.5, circum, area, perimeter;
        circum = 2*pi*radius;
        area = pi*radius*radius;
        perimeter = lenth + width;
        printf ("circum %f\n", circum);
        printf ("area %f\n", area);
        printf ("perimeter %f\n", perimeter);
    }
    printf ("pi %f\n",pi);
    return 0;
}
/*Below is what I did to fix the program:
    1. I fixed the data type & I converted them from int to float
       because every input and output are in fractional value.
    2. There are some undeclared variables, I declared them.
    3. I fix the constant problem of duplicate variable by separating
       them in glaobal and local variable.
*/