#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i;
    scanf("%d%d", &n, &m);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int f[100000] = {0};

    for (i = 0; i < n; i++)
    {
        int index = a[i];
        (f[index])++;
    }
    for (i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }
    return 0;
}
