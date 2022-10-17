#include <cs50.h>
#include <stdio.h>
#include <math.h>
 int main()
{
    float x = get_float("x: ");
    printf("%f\n", x);
    int y = round(x * 100);
    printf("%f\n", x * 100);

    printf("%i\n", y);
}