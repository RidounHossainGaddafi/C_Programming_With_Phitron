#include<stdio.h>

int main()
{
    int a=5;
    int *x;
    x = &a;
    int **y;
    y = &x;
    printf("%d %d",**y,x);
    return 0;
}
