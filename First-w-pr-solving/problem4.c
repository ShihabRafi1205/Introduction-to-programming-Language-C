// 🟡 Problem 4 — Grade Calculator

// Take a student's marks (0–100) as input and print the grade according to this system:

// Marks	Grade
// 80–100	A+
// 70–79	A
// 60–69	A-
// 50–59	B
// 40–49	C
// 33–39	D
// 0–32	F

// Also, if the user enters a mark less than 0 or greater than 100, print:
#include <stdio.h>
int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark <= 100 && mark >= 0)
    {
        if (mark >= 80)
        {
            printf("A+");
        }
        else if (mark >= 70)
        {
            printf("A");
        }
        else if (mark >= 60)
        {
            printf("-A");
        }
        else if (mark >= 50)
        {
            printf("B");
        }
        else if (mark >= 40)
        {
            printf("C");
        }
        else if (mark >= 33)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("Invalid Marks");
    }
}