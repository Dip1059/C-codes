#include<stdio.h>
#include<math.h>
int main()
{
    int l1,l2,i,j,t,k=0;
    scanf("%d%d",&l1,&l2);
    for(i=l1;i<=l2;i++)
    {
        t=sqrt(i);
        for(j=2;j<=t;j++)
            {
                if(i%j==0)
                    break;
                else k++;
            }
        if(k==t)
            printf("%d",l1);
    }
}
