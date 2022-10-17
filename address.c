#include <cs50.h>
#include <stdio.h>

int main(void) {
    // int n = 50;
    // int *p = &n;
    // printf("%p\n", p);
    // // printf("%p\n", &n);
    // printf("%i\n", n);
    // printf("%i\n", *p);

    // string s = "HI!";
    // printf("%s\n", s);

    // char *s = "HI!";
    // printf("%s\n", s);

    string s = "HI!"; // char *s = "HI!" -> same thing because of the cs50 library
    // char c = s[0];
    // char *p = &c;
    // printf("%p\n", p);
    // printf("%s\n", s);
    // printf("%p\n", s);

    char *p = &s[0];
    printf("%p\n", p); // The address of the first character in s, in this case it is H
    printf("%p\n", s); // The address of s itself (it is actually the first character in the string)

    char *g = &s[1];
    printf("%p\n", g); // The address of the second character in s, in this case it is I
    printf("%p\n", s);

    char *f = &s[2];
    printf("%p\n", f); // The address of the third character in s, in this case it is !
    printf("%p\n", s);

    //Or you can write like this;
    printf("%p\n", s);  // 0x102d2ffa4
    printf("%p\n", &s[0]);  // 0x102d2ffa4
    printf("%p\n", &s[1]);  // 0x102d2ffa5
    printf("%p\n", &s[2]);  // 0x102d2ffa6
    printf("%p\n", &s[3]); // The address of the \n null character it means the end of the string. // 0x102d2ffa7



}