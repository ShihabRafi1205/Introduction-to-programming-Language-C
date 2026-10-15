#include <stdio.h>
int main()
{
    int n;
    int ns;
    int max=0;
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++)
    {
        scanf("%d", &ns);
        if (ns>max)
        {
            max=ns;
        } 
    }
    printf("%d", max);
    return 0;
}