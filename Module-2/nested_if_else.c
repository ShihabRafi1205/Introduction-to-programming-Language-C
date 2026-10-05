#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if (money >= 6000)
    {
        printf("Go to dahab\n");
        if (money >= 10000)
        {
            printf("Sharm Al-shaikh also\n");
        }
        else
        {
            printf("return to Home\n");
        }
    }
    else
    {
        printf("Don't go anywhere\n");
    }
    return 0;
}