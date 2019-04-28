#include <stdio.h>
#include <stdlib.h>

int add(int *x,int *y)
{
    return (*x)+(*y);

}

int main()
{
    int a=10,b=23;
    printf("%d",add(&a,&b));
    return 0;
}
