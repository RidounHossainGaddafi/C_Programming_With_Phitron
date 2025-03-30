#include<stdio.h>

int main()
{
    int low,high,mid,i,n,item;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("Enter value\n");
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want to search:\n");
    scanf("%d",&item);
    low = 0;
    high= (n-1);
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid] == item)
        {
            printf("The value found and index is %d",mid);
            return 0;
        }
        else if(a[mid]<item)
        {
            low= mid+1;
        }
        else if(a[mid]>item)
        {
            high=mid-1;
        }
    }
    printf("value is not found\n");
    return 0;
}
