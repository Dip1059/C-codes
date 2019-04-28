#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double y,x;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%lf",&y);
            x=sqrt(y);
            printf("%.0lf\n",x);
            printf("\n");
        }
    }
    return 0;
}

