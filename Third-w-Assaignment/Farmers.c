#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    int m1, m2, d, day_now, extra = 0;

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int all_farmer = m1 + m2;
        day_now = (m1 * d) / all_farmer;
        extra = d - day_now;
        printf("%d\n", extra);
    }

    return 0;
}