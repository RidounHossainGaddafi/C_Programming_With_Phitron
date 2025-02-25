#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="abcdef";
    char b[20];
    int i,j,a_len;
    a_len = strlen(a);

    for(i=0,j=a_len-1; a[i] != '\0' ;i++,j--)
    {
        b[j]=a[i];
    }

    b[a_len] = '\0';
    
    fputs(b,stdout);    
    return 0;
}