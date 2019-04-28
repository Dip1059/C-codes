#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,n,l;
    scanf("%d",&n);
    char a[n][100];
    for(i=0; i<=n; i++)
      gets(a[i]);
    //char *k;
    printf("\n");
    for(i=0; i<=n; i++){
        for(j=0; j<strlen(a[i]); j++)
            printf("%c ",a[i][j]);
        printf("\n");}
    /*for(i=0; i<n; i++)
        for(j=0; j<n-1; j++)
            if(strcmp(e[j],e[j+1])>0)
            {
                k=e[j];
                e[j]=e[j+1];
                e[j+1]=k;
            }

    //printf("\n");
    for(i=0; i<n; i++)
        printf("%s\n",e[i]);
*/
    return 0;
}
