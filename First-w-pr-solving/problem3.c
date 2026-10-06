// Problem 3 — Even or Odd + Divisibility

// Take an integer n.

// Your program should determine:

// Whether n is Even or Odd
// Whether it is divisible by both 3 and 5

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("This is a Even Number\n");
        if (n % 3 == 0 && n % 5 == 0)
        {
            printf("it's divisible by both 3 and 5");
        }
        else
        {
            printf("this is not divisible by both");
        }
    }
    else
    {

        printf("This is Odd\n");
        if (n % 3 == 0 && n % 5 == 0)
        {
            printf("it's divisible by both 3 and 5");
        }
        else
        {
            printf("this is not divisible by both");
        }
    }
}
