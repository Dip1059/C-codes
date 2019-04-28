#include<stdio.h>
#include<math.h>
int a[1000];
int main()
{
    int i,j,k,l=0;
    a[0]=0;
    a[1]=0;
    a[2]=1;
    k=sqrt(1000);
    for(i=3; i<1000; i++)
        a[i]=1;
    for(i=2; i<=k; i++)
        for(j=i+2; j<1000; j=j+2)
            if(j%i==0)
                a[j]=0;
    for(i=0; i<1000; i++)
    {
        if(a[i]==1)
        {
            printf("%d\n",i);
            l++;
        }
    }
    printf("\nk=%d\n\nl=%d\n",k,l);
    return 0;

}
