#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 2*acos(0.0)

int main()
{
    double a,b,c,y,v,r,s;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        v=sqrt(s*(s-a)*(s-b)*(s-c));
        r=pi*(v/s)*(v/s);
        y=(pi*(((a*b*c)/4)/v)*(((a*b*c)/4)/v))-v;
        printf("%.4lf %.4lf %.4lf\n",y,v-r,r);
    }
    return 0;
}
