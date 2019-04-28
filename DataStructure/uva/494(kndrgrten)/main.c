#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char a[1000000];
    int i,l=0,k=0;
    while(1)
    {
        gets(a);
        l=strlen(a);
        for(i=0; i<l; i++)
        {
            if(i>0)
            if(a[i]==' '&&((a[i-1]>='a'&&a[i-1]<='z')||(a[i-1]>='A'&&a[i-1]<='Z')))
            {
                k++;
            }
        }

        printf("%d\n",k);
        k=0;l=0;
    }
    return 0;
}
