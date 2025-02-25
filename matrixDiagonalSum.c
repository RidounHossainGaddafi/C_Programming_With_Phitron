#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, i, j, psum = 0, ssum = 0,s=0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                psum = psum + a[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i+j == n-1)
            {
                ssum = ssum + a[i][j];
            }
        }
    }
    s=abs(psum-ssum);
    printf("%d", s);
    return 0;
}