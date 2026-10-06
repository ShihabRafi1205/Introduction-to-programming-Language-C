// Problem 2 — Positive, Negative or Zero

// Take an integer from the user and determine whether it is:

// Positive
// Negative
// Zero

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Positive");
    }
    else if (n < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}