#include <cs50.h>
#include <stdio.h>

bool valid_triangle (float x, float y, float z);

int main (void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");
    float z = get_float("z: ");
    bool t = valid_triangle(x, y, z);
    printf("%i\n", t);

    
    // if (t)
    // {
    //     printf("valid\n");
    // }
    // else
    // {
    //     printf("invalid\n");
    // }
    

   //printf(t ? "This is a valid triangle.\n" : "This is an invalid triangle.\n");
}

bool valid_triangle (float x, float y, float z)
{
    if (x > 0 && y > 0 && z > 0)
    {
        if (x + y > z && x + z > y && y + z > x)
        {
            return true;
        }
    }
    return false;
}