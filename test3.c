#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    string str1 = "a";
    string str2 = "b";
    char buf[256];
    snprintf(buf, sizeof(buf), "%s%s", str1, str2);
    printf("%s\n", buf);
}