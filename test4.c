#include <cs50.h>
#include <stdio.h>

int triple(int x);

int main(void)
{
    int foo = 4;
    triple(foo);
}

int triple(int x)
{
    return x *= 3;
}