#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],e[100],f[100];
    printf("Enter the file location(drive): ");
    scanf("%s",e);
    e[1]=':';
    e[2]='\0';
    printf("<%s>",e);
    printf("\nEnter the file location(folder): ");
    scanf("%s",f);
    char g[100]="cd ";
    strcat(g,f);
    system(e);
    system(g);
    printf("<%s>",g);
    scanf("%s",a);
    char b[100]="javac ";
    char d[100]=".java";
    char c[100]="java ";
    strcat(c,a);
    //printf("<%s>",c);
    strcat(a,d);
    //printf("<%s>",a);
    strcat(b,a);
    //printf("<%s>",b);
    system(b);
    system(c);

    printf("\n\n------------------\n\n\n");

}
