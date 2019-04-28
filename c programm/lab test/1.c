#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i=0,j;
    gets(a);
    while(i<strlen(a))
    {

    for(j=0;isalpha(a[i])&&i<strlen(a);j++,i++)
    {
        b[j]=a[i];
    }
    j--;
    for(;j>=0;j--)
    printf("%c",b[j]);
    for( ;isalpha (a[i])==0&&i<strlen(a);i++)
    printf("%c",a[i]);

}
}
