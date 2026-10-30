#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int small_count = 0;
        int cap_count = 0;
        int digits_count = 0;
        char s[10001];
        scanf("%s", s);

        int length = strlen(s);

        for (int i = 0; i < length; i++)
        {
            
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                small_count++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cap_count++;
            }
            else
            {
                digits_count++;
            }
        }
        printf("%d %d %d\n", cap_count, small_count, digits_count);
    }

    return 0;
}