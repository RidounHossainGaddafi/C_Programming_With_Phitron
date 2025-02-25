#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000000];
    scanf("%s", s);
    int a = 0, sum = 0, i, b = 0;
    a = strlen(s);
    for (i = 0; i < a; i++)
    {
        
            b = s[i] - '0';
            sum = sum + b;
        
    }
    printf("%d", sum);
    return 0;
}