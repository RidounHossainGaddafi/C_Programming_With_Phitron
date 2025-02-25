#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000];
    char s2[1000];
    char s3[1000];
    int a = 0, b = 0, c = 0;
    scanf("%s %s %s",s1, s2, s3);
    a = strcmp(s1, s2);
    b = strcmp(s2, s3);
    c = strcmp(s1, s3);

    if (a < 0 && c < 0)
    {
        printf("%s\n", s1);
        if (b < 0)
        {
            printf("%s\n", s3);
        }
        else
        {
            printf("%s\n", s2);
        }
    }
    else if (b < 0 && a > 0)
    {
        printf("%s\n", s2);
        if (c < 0)
        {
            printf("%s\n", s3);
        }
        else
        {
            printf("%s\n", s1);
        }
    }
    else if(b>0 && c>0)
    {
        printf("%s\n",s3);
        if(a<0)
        {
            printf("%s\n",s2);
        }
        else
        {
            printf("%s\n",s1);
        }
    }
    else if (a<0 && c>0)
    {
        printf("%s\n",s3);
        printf("%s\n",s2);
    }
    else if (a>0 && c>0)
    {
        if(b<0)
        {
            printf("%s\n",s2);
            printf("%s\n",s1);
        }
        else
        {
            printf("%s\n",s3);
            printf("%s\n",s1);
        }
    }
    else if(a>0 && c<0)
    {
        printf("%s\n",s2);
        printf("%s\n",s3);
    }
    else if (a<0 && b<0)
    {
        printf("%s\n",s1);
        printf("%s\n",s3);
    }
    else if (a<0 && b>0)
    {
        if (c<0)
        {
            printf("%s\n",s1);
            printf("%s\n",s2);
        }
        else
        {
            printf("%s\n",s3);
            printf("%s\n",s2);
        }
        
    }
    else if (a>0 && b>0)
    {
       printf("%s\n",s3);
       printf("%s\n",s1);
    }
    else if (b>0 && c<0)
    {
       printf("%s\n",s1);
       printf("%s\n",s2);
    }
    else if (b<0 && c<0)
    {
       if(a<0)
       {
        printf("%s\n",s1);
        printf("%s\n",s3);
       }
       else{
        printf("%s\n",s2);
        printf("%s\n",s3);
       }
    }
    else if (b<0 && c>0)
    {
        printf("%s\n",s2);
        printf("%s\n",s1);
    }
   
    return 0;
}