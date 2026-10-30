#include <stdio.h>
#include <string.h>
int main()
{
    char s[10001];
    scanf("%s", s);
    int length = strlen(s);

    int cnt_letters[26] = {0};
    for (int i = 0; i < length; i++)
    {
        int val = s[i] - 'a';
        cnt_letters[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt_letters[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt_letters[i]);
        }
    }

    return 0;
}