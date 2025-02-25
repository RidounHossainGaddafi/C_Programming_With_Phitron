#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int f[26] = {0};
    int i, a;
    a = strlen(s);
    for (i = 0; i < a; i++)
    {
        int index = s[i] - 'a';
        (f[index])++;
    }
    for (i = 0; i < 26; i++)
    {
        if ((f[i]) > 0)
        {
            printf("%c : %d\n", (i + 'a'), (f[i]));
        }
    }

    return 0;
}


