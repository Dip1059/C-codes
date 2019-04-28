#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long long int i,j,m=0,n,t,k=0;
    char a[1000];
    scanf("%llu",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(a);
        m=strlen(a);
        for(j=0; j<m ;j++)
        {
            if(a[j]=='a')
                k++;
            else if(a[j]==' ')
                k++;
            else if(a[j]=='b')
                k+=2;
            else if(a[j]=='c')
                k+=3;
            else if(a[j]=='d')
                k++;
            else if(a[j]=='e')
                k+=2;
            else if(a[j]=='f')
                k+=3;
            else if(a[j]=='g')
                k++;
            else if(a[j]=='h')
                k+=2;
            else if(a[j]=='i')
                k+=3;
            else if(a[j]=='j')
                k++;
            else if(a[j]=='k')
                k+=2;
            else if(a[j]=='l')
                k+=3;
            else if(a[j]=='m')
                k++;
            else if(a[j]=='n')
                k+=2;
            else if(a[j]=='o')
                k+=3;
            else if(a[j]=='p')
                k++;
            else if(a[j]=='q')
                k+=2;
            else if(a[j]=='r')
                k+=3;
            else if(a[j]=='s')
                k+=4;
            else if(a[j]=='t')
                k++;
            else if(a[j]=='u')
                k+=2;
            else if(a[j]=='v')
                k+=3;
            else if(a[j]=='w')
                k++;
            else if(a[j]=='x')
                k+=2;
            else if(a[j]=='y')
                k+=3;
            else if(a[j]=='z')
                k+=4;

        }
        printf("Case #%llu: %llu\n",i,k);
        k=0;m=0;
    }
    return 0;
}
