#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double p,q,r,m=0,o=0;
    int n,j=0,k=1;
    while(scanf("%d",&n)==1&&n!=0)
    {
        scanf("%lf%lf%lf",&p,&q,&r);
        if(n==1)
        {
            m=(q-p)/r;
            o=p*r+.5*m*r*r;
        }
        else if(n==2)
        {
            m=(q-p)/r;
            o=p*m+.5*r*m*m;
        }
        else if(n==3)
        {
            j=p*p+2*q*r;
            o=sqrt(j);
            m=(o-p)/q;
        }
        else if(n==4)
        {
            j=p*p-2*q*r;
            o=sqrt(j);
            m=(p-o)/q;
        }
        printf("Case %d: %.3lf %.3lf\n",k,o,m);
        k++;
        j=0;m=0;o=0;
    }
    return 0;
}
















