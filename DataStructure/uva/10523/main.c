#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[10000];

long long apowi(int i,int a)
{
    long long k=a,j;
    for(j=1; j<i; j++)
    {
        k*=a;
    }
    return k;
}


int i2scnvrt(long long k)
{
    int j=0,l;
    long long g,h=k;

    while((h/10)>=0)
    {
        g=h%10;
        s[j]=g+48;
        if(h<10)
            break;
        h=h/10;
        j++;
    }

     strrev(s);
     printf("%s\n",s);

     return j;

}


int main()
{
    int i,a,n,j;
    long long l,k=0;
    while(scanf("%d%d",&n,&a)==2)
    {
        for(i=1; i<=n; i++)
        {
            l=apowi(i,a);
            k+=i*l;
        }
        //printf("%lld\n",k);
        j=i2scnvrt(k);
        k=0;
        for(i=0; i<=j; i++)
            s[i]=NULL;
    }
    return 0;
}
