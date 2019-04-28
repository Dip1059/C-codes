#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100];
    //printf("drive name: ");
    //scanf("%s",b);
    //b[1]=':';
    //b[2]='\0';
    printf("file name: ");
    scanf("%s",a);
    char javac[100]="javac ";
    char java[100]="java ";
    char d[100]=".java";
    strcat(java,a);
    strcat(a,d);
    strcat(javac,a);
    //printf("%s\n%s\n",javac,java);
    system(javac);
    system(java);
    main();
    return 0;
}
