#include<stdio.h>
int main()
{
    int n,i,j,l;
    scanf("%d",&n);
    int a[n][5];
    for(l=0; l<n; l++)
        for(i=0; i<5; i++)
            scanf("%d",&a[l][i]);
    printf("\n");
    for(l=0; l<n; l++)
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(a[l][i]>=a[l][j])
                    continue;
                else
                    break;
            }
            if(j==5)
                printf("%d ",a[l][i]);
        }
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                if(a[l][i]<=a[l][j])
                    continue;
                else
                    break;
            }
            if(j==5)
                printf("%d ",a[l][i]);
        }
        printf("\n");
    }
    return 0;
}
