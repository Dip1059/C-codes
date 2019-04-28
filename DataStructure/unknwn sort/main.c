#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[]="kabir",b[]="mehrub";//"kabir","mehrub","jogot","sohel","rafiq","munna","dipankar";
    //int i;
    //for(i=0; i<7; i++)
    if(strcmp(a,b)>0)
    {
        printf("%s ",a);
        printf("%s",b);
    }
    else
    {
        printf("%s ",b);
        printf("%s",a);
    }
    return 0;
}
