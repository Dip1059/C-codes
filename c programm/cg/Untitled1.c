#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    p=fopen("1.txt","r");
    //q=fopen("2.txt","a");
    int i,n,a[100];
    fscanf(p,"%d",&n);
    for(i=0; i<n; i++)
    {
        fscanf(p,"%d",a[100]);
        printf("%d ",a[i]);
    }
    fclose(p);
    //fclose(q);
    /*scanf("%d",&j);
    for(i=0; i<n; i++)
        if(j==a[i])
            printf("%d",i);
    if(k==0)
        printf("not found");*/
    return 0;
}

