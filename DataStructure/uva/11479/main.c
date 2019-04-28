#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int t,a,b,c,i;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a>0&&b>0&&c>0)
            if(a==b&&b==c)
                printf("Case %ld: Equilateral\n",i);
            else if(a==b||b==c||c==a)
                printf("Case %ld: Isosceles\n",i);
            else if((a+b<=c)||(b+c<=a)||(c+a<=b))
                printf("Case %ld: Invalid\n",i);
            else
                printf("Case %ld: Scalene\n",i);
        else
            printf("Case %ld: Invalid\n",i);
    }
    return 0;
}
