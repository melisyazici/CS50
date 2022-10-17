#include <cs50.h>
#include <stdio.h>

//Left-Aligned

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("Size: ");
        if (n > 0 && n < 9)
        {
            break;
        }
    }


    for (int i = 0 ; i < n ; i++)
    {
        printf("#");

        for (int j = 0 ; j < i ; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
