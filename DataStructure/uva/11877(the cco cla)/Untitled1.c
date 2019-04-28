#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,j=0,l=0;
    while(scanf("%d",&n)==1&&n!=0)
    {
        if(n==1)
            printf("0\n");
        else
        {
            i=n;
            j=n;
            for(; ;)
            {
                i=i/3;
                l=l+i;
                j=j%3;
                i=i+j;

                if(j>0&&i==2)
                {
                    l++;
                    break;
                }
                else if(j==0&&i==1)
                    break;
                j=i;
            }
            printf("%d\n",l);
            i=0;
            j=0;
            l=0;
        }
    }
    return 0;
}

