#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,p;
    scanf("%s",a);
    for(i=0; i<strlen(a); i++)
        for(j=0; j<strlen(a)-1; j++)
            if(a[j]>a[j+1])
            {
                p=a[j];
                a[j]=a[j+1];
                a[j+1]=p;
            }
    printf("%s",a);
    return 0;


}
