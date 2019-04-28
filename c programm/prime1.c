#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,i,j,k,t;
    scanf("%d%d",&n1,&n2);
    printf("\n\n");
    for(n1=2;n1<=n2;n1++)
    {
        t=sqrt(n1);
        for(i=2,k=0;i<=t;i++)
        {
            if(n1%i==0)
                k=1;

        }

        if(k==0)
            printf("%d\n",n1);

    }



}
