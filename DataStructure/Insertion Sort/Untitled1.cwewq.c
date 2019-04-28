#include<stdio.h>
int main()
{
    int *x,a=3,b=7;

    x=&a;
    *x=10;
    printf("%d",a);

    return 0;
}
