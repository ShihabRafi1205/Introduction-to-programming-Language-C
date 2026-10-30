#include <stdio.h>
#include <string.h>
int main()
{
    char s[100001];
    scanf("%s", s);
    // printf("%s", s);
    int length = strlen(s);

    int cons_count = 0;
    for (int i = 0; i < length; i++)
    {

        // printf("%c", s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U')
        {
            cons_count++;
        }
    }
    printf("%d", cons_count);

    return 0;
}