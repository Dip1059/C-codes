#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,l,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
    }
    printf("\n");
    scanf("%d",&l);
    printf("\n");
    for(i=l-1; i>=0; i--)
    {
        a[i+1]=a[i];
       // printf("%d ",a[i]);
    }
    //for(i=0; i<n-1; i++)
      //  a[i]=a[i+1];
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}


