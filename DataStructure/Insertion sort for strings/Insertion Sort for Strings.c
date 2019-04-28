#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j;
    char *k;
    char a[100]="kabir";
    char b[100]="Kabir";
    char c[100]="kaber";
    char d[100]="kober";
    char *e[100]= {a,b,c,d};
    //for(i=0; i<4; i++)
    //  printf("%s ",e[i]);
    //printf("\n");
    for(i=0; i<4; i++)
    {
        k=e[i];
        for(j=i-1; j>=0; j--)
            if(strcmp(k,e[j])>0)
                e[j+1]=e[j];
            else
                break;
        e[j+1]=k;
    }//printf("\n");
    for(i=0; i<4; i++)
        printf("%s\n",e[i]);

    return 0;
}

