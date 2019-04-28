#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,p,n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=1; i<n; i++)
        for(j=0; j<n-i; j++)
            if(a[j]>a[j+1])
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}
