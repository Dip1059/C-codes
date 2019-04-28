#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100];
    int d;
    gets(a);
    gets(b);
    strrev(a);
    strrev(b);
    printf("\n");
    puts(a);
    puts(b);
    printf("\n");
    for(d=strlen(a)-1; d>=0; d--)
    {
        c[d]=a[d]+b[d];
    }
    puts(c);
    strrev(c);
    puts(c);
}
