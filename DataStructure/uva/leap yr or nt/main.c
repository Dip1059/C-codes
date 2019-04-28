#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,l=0,k=0;
    while(scanf("%d",&n)==1)
    {
        if((n%4==0&&n%100!=0)||n%400==0)
        {
            printf("This is leap year.\n",l++);
            if(n%55==0)
                k=1;
        }
        if(n%15==0)
            printf("This is huluculu festival year.\n",l++);
        if(k==1)
            printf("This is bulukulu festival year.\n",l++);
        if(l==0)
            printf("This is an ordinary year.\n");
        printf("\n");
        l=0;k=0;
    }
return 0;
}
