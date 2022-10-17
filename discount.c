#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_float("Percent Off: ");
    float sale = discount(regular, percent_off);
    printf("Sale Price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    // printf ("100 - percentage = %i\n", 100 - percentage);
    // return price - (percentage / 100) * price ;
    return price * (100 - percentage) / 100;
}