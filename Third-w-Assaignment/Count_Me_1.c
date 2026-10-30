#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int divisible_by_2 = 0;
    int divisible_by_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            divisible_by_2++;
        }
        else if (a[i] % 3 == 0)
        {
            divisible_by_3++;
        }
    }

    printf("%d %d", divisible_by_2, divisible_by_3);

    return 0;
}