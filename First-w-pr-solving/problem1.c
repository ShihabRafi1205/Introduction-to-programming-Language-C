// Write a C program that takes three integers as input and prints:

// Their sum
// Their average
// Their largest number

#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = num1 + num2 + num3;
    int average = sum / 3;
    printf("%d\n %d\n", sum, average);
    if (num1 > num2 && num1 > num3)
    {
        printf("The largest number is : %d\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The largest number is : %d\n", num2);
    }
    else
    {
        printf("The biggest Number is : %d", num3);
    }
    return 0;
}