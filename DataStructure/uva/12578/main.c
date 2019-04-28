#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 2*acos(0.0)

int main()
{
    int l,t;
    double n=0,m=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        m=l*(l*0.6);
        n=pi*(l*0.2)*(l*0.2);
        printf("%.2lf %.2lf\n",n,m-n);
        m=0;n=0;
    }

    return 0;
}
