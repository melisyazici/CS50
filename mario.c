#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    while (true)
    {
        n = get_int("Size: ");
        if (n > 0)
        {
        break;
        }
    }


    // For each row
    for (int i = 0 ; i < n ; i++)
    {
        printf("#");

        // For each column
        for (int j = 0 ; j < n - 1 ; j++)
        {
            // Print a brick
            printf("#");
        }
        // Move to next row
        printf("\n");
    }
}