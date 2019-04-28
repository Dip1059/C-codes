#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[300]="1234567891011121314151617181920212223242526272829303132333435363738394041424344454647484950";
    int b[10],l,n,i,k,p,o,m=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(p=0; p<10; p++)
            b[p]=0;
        scanf("%d",&k);
        if(k>10)
        {
            m=k;
            k=11;
            for(l=11; l<=m; l++)
                k+=2;

        }
        else if(k==10)
            k++;

        for(l=0; l<k; l++)
            if(a[l]=='0')
                b[0]++;
            else if(a[l]=='1')
                b[1]++;
            else if(a[l]=='2')
                b[2]++;
            else if(a[l]=='3')
                b[3]++;
            else if(a[l]=='4')
                b[4]++;
            else if(a[l]=='5')
                b[5]++;
            else if(a[l]=='6')
                b[6]++;
            else if(a[l]=='7')
                b[7]++;
            else if(a[l]=='8')
                b[8]++;
            else if(a[l]=='9')
                b[9]++;

        for(o=0; o<10; o++)
            printf("%d ",b[o]);
        printf("\n");
        m=0;
    }
    return 0;
}
