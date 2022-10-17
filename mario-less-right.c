#include <cs50.h>
#include <stdio.h>

// Right-Aligned

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
        for (int j = 0 ; j < n ; j++)
        {
            if ((i + j) > (n - 2))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

}