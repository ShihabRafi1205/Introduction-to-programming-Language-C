#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ns;
    int sum_ps = 0;
    int sum_neg =0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ns);
        if (ns>0)
        {
            sum_ps = sum_ps + ns;
        }
        else
        {
            sum_neg = sum_neg + ns;
        }
    }
    printf("%d %d", sum_ps,sum_neg);
    return 0;
}