#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);

    int sz = strlen(s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
    printf("%d\n", sz);

    return 0;
}