#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];
        //printf("%d ",a[i]);
    }
        a[0]=9;
    for(i=0; i<n+1; i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}

