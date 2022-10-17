#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (islower(s[i]))
        {
            s[i] -= 32;
            printf("%c", s[i]);
        }
    }
    printf("\n");
}