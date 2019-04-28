#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,l,p=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        char a[100],b[100],c[100];
        gets(a);
        gets(b);
        k=strlen(a);
        l=strlen(b);
        if(l>k)
            j=l;
        else
            j=k;
        for(i=0; i<j; i++)
        {
            if(k>l)
                for(i=l; i<k; i++)
                    b[i]=0;
            else if(l>k)
                for(i=k; i<l; i++)
                    a[i]=0;

            c[i]=a[i]-48+b[i]-48;
            p++;

        }
        printf("\n");
        for(i=0;i<p;i++)
        printf("%d",c[i]);
    }
}
