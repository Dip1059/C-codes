#include<stdio.h>
int main()
{
    int n,i,j,a[5],b[5];
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<5; i++)
        scanf("%d",&a[i]);


    for(i=0; i<5; i++)
        scanf("%d",&b[i]);
    printf("\n");
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
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(b[i]>=b[j])
                continue;
            else
                break;
        }
        if(j==5)
            printf("%d ",b[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(b[i]<=b[j])
                continue;
            else
                break;
        }
        if(j==5)
            printf("%d ",b[i]);
    }
    return 0;
}

