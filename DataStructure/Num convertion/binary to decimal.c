#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int n,i,j=0,k=0;
    char a[100];
l:
    gets(a);
    n=strlen(a);
    k=n;
    k--;
    for(i=0; i<n ;i++,k--)
        j+=(a[i]-48)*pow(2,k);
    printf("%d\n\n",j);
    j=0,k=0;
    goto l;
}
