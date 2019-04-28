#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,p,n,l;
    scanf("%d",&n);
    int a[n][5];
    for(l=0; l<n; l++)
        for(i=0; i<5; i++)
            scanf("%d",&a[l][i]);
    printf("\n");
    for(l=0; l<n; l++)
        for(i=1; i<5; i++)
            for(j=0; j<5-i; j++)
                if(a[l][j]>a[l][j+1])
                {
                    p=a[l][j];
                    a[l][j]=a[l][j+1];
                    a[l][j+1]=p;
                }
    for(l=0; l<n; l++)
        printf("%d %d\n",a[l][4],a[l][0]);
    return 0;
}

