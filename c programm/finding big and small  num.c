#include<stdio.h>
int main()
{
    int n,i,j,l,a[5];
    scanf("%d",&n);
    for(l=1; l<=n; l++)
        for(i=0; i<5; i++)
            scanf("%d",&a[i]);
    for(l=1; l<=n; l++)
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(a[i]>=a[j])
                    continue;
                else
                    break;
            }
            if(j==5)
                printf("%d ",a[i]);
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(a[i]<=a[j])
                    continue;
                else
                    break;
            }
            if(j==5)
                printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
