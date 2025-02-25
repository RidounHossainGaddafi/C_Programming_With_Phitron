#include <stdio.h>
#include <string.h>
int main()
{
    char str[10] = "gaddafi";
    int a = strlen(str);
    int f[26] = {0};
    int i, count = 0;
    for (i = 0; i < a; i++)
    {
        int index = str[i] - 'a';
        f[index] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        // printf("%c %d\n",i+'a',f[i]);
        if (f[i] == 1)
        {
            printf("%c %d\n",i+'a',f[i]);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
/*first e alphabet ke numeric value te niyechi.
Tarpor oi numeric valu gulu ke frequency array er
same index e given string er jake jake peyesi
sekhane sekhane 1 kore diyesi*/