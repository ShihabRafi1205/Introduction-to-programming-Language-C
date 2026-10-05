#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    // Chack Even Number or Odd Number
    if (num % 2 != 0)
    {
        printf("Odd Number\n");
    }
    else
    {
        printf("Even Number\n");
    }

    if (num % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    // check positive Number and negative Number
    if (num > 0)
    {
        printf("Positive Number\n");
    }
    else if (num == 0)
    {
        printf("Neither Positive nor Negative\n");
    }
    else
    {
        printf("Negative Number\n");
    }
}

/**
 * Explain if else ladder
 *
 * An if else ladder is used when we have multiple conditions to chech one 
 * after another, suppose we have to determine a student's grade, such as : 
 * 90 marks for A+ , and 75 marks for A- after that B,C etc.
 */