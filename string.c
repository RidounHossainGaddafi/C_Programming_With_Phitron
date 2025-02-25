#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if(a[i]<1)
        {
           printf("Entry-level candidate\n");
        }
         else if(a[i]>=1 && a[i]<=3)
        {
           printf("Junior candidate\n");
        }
         else if(a[i]>=4 && a[i]<=7)
        {
           printf("Mid-level candidate\n");
        }
         else
        {
           printf("Senior candidate\n");
        }
        
    }
    

    return 0;
}
