#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int i=0,j=1,k=0,a,l;
    while(scanf("%llu",&a)==1)
    {
        //printf("1 ");
        for(l=2; l<=a; l++)
        {
            k=i+j;
            i=j;
            j=k;
            //printf(" %d ",k);
        }
        printf("The Fibonacci number for %llu is %llu\n",a,k);
        i=0;j=1;k=0;
    }
    return 0;
}
