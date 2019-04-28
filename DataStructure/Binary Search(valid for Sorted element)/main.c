#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,start=0,end=4,mid=0,k=0;
    scanf("%d",&n);
    int a[5]= {5,10,15,20,25};
    mid=(start+end)/2;
p:
    if(a[mid]!=n)
    {
        k++;
        if(k>2)
            printf("not found");
        else if(a[mid]>n)
        {
            end=mid;
            if(end<=start)
                printf("not found");
            else
            {
                mid=(start+end)/2;
                goto p;
            }
        }
        else if(a[mid]<n)
        {
            start=mid;
            if(start>=end)
                printf("not found");
            else
            {
                mid=(start+end)/2;
                if(start+end%2!=0)
                    mid=mid+1;
                goto p;
            }
        }


    }
    else
        printf("%d",mid);
    return 0;
}
