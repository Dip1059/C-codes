#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[100],b[100],c[100];

int main()
{
    int i,j=0,carry=0,mod,k=0,m=1,n;

    while(scanf("%d",&n)==1)
    while(n--)
    {
        scanf("%s",a);
        //printf("a=%s\n",a);
        strcpy(b,a);
        //printf("b=%s\n",b);
        strrev(b);
        //printf("b=%s\n",b);
        for(; ;)
        {
            for(i=strlen(a)-1; i>=0; i--)
            {
                k=a[i]-48+b[i]-48+carry;
                //printf("k=%d\n",k);
                mod=k%10;
                //printf("mod=%d\n",mod);
                carry=k/10;
                //printf("carry=%d\n",carry);
                c[j]=mod+48;
                //printf("c[%d]=%c\n",j,c[j]);
                j++;
            }
            //printf("carry=%d\n",carry);
            if(carry>0)
            {
                c[j]=carry+48;
                c[j+1]=NULL;
            }
            else
                c[j]=NULL;
            j=0;
            carry=0;
            mod=0;
            k=0;
            strcpy(b,c);
            strrev(c);
            strcpy(a,c);
            if(!strcmp(a,b))
            {
                printf("%d %s\n",m,c);
                m=1;
                break;
            }
            else
                m++;
        }
    }
    return 0;
}
