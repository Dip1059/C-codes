#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,m,p=0,mod,carry=0,t;
    char a[1000],b[1000],c[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",a,b);
        l=strlen(a);
        m=strlen(b);
        k=l-m;
        if(k==0)
            i=l;
        else if(k<0)
        {
            k*=(-1);
            for(i=l; i<(l+k); i++)
                a[i]='0';
            a[i]=NULL;
        }
        else if(k>0)
        {
            for(i=m; i<(m+k); i++)
            {
                b[i]='0';
            }
            b[i]=NULL;
        }
        for(j=0; j<i; j++)
        {
            k=(a[j]-48+b[j]-48)+carry;
            mod=k%10;
            carry=k/10;
            if(mod>0||p>0)
            {
                c[p]=mod+48;
                p++;
            }
        }

        if(carry>0)
        {
            c[p]=carry+48;
            p++;
        }
        for(i=--p; i>=0; i--)
        {
            if(c[i]!='0')
                break;
        }
        c[i+1]=NULL;

        printf("%s\n",c);
        c[0]=NULL;
        p=0; carry=0;
    }
    return 0;
}
