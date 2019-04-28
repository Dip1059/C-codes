#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100000];
    int i,l,j,k;
    while(1)
    {
        gets(a);
        l=strlen(a);
        for(i=0; i<l; i++)
        printf("%s\n",a);
    }
    return 0;
}
