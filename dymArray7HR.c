#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*temp=0;
    scanf("%d",&n);
    int *ar = (int *)malloc(1*sizeof(int));
    for(i=0; i<1; i++)
    {
        scanf("%d",&ar[i]);
    }
    temp = ar;
     for(i=1; i<n; i++)
    {
        ar = (int *)realloc(ar,1*sizeof(int));

        if(ar == NULL)
        {
            ar = temp;
        }
        scanf("%d",&ar[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }
    free(ar);
    return 0;
}
