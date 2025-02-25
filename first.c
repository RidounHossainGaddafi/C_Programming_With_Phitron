#include <stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char b[20]="ac";

    printf("%s\n",b);
    int len = strlen(b);
    printf("%d\n",len);
    int i;
    for(i=0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';
     
    printf("%s",a);
    return 0;
}