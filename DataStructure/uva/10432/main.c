#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 2*acos(0.0)

int main()
{
    int r,n;
    double m;
    while(scanf("%d %d",&r,&n)==2)
    {
        m=n*r*r*sin((2*pi/n)/2);
        printf("%.3lf\n",m);
    }
    return 0;
}
