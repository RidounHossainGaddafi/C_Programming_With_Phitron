#include<stdio.h>

int main()
{
    int i,temp=0,j;
    int ar[] = {1,2,3,4,5,6,7,8,9,10};

    for(i=0,j=9; i<10,j>=0; i++,j--)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }

    for(j=0; j<10; j++)
    {
        printf("%d\n",ar[j]);
    }

    return 0;
}
