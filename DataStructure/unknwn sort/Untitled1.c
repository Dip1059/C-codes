#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,p,a[n];
    for(j=0; j<n; j++)
        scanf("%d",&a[j]);
    for(j=0; j<n; j++)
        for(i=n-1; i>0; i--)
            if(a[i-1]>a[i])
            {
                p=a[i-1];
                a[i-1]=a[i];
                a[i]=p;
            }
    for(i=0; i<n; i++)
        printf("%d ",a[i]);




}
