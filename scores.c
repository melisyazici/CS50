#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n = get_int("How many scores? ");
    float sum = 0;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
        printf("sum: %f\n", sum);

        sum = sum + scores[i];
        printf("sum: %f\n", sum);
    }
    printf("Average: %f\n", sum / 3);
}