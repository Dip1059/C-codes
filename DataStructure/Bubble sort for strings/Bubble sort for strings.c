#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    char p[n][10];
    char* g[n],*u;
    for(i=0; i<n; i++)
    {
        scanf("%s",p[i]);
        g[i]=p[i];
    }
    printf("\n");
    for(i=0; i<n; i++)
        for(j=0; j<n-1; j++)
            if(strcmp(g[j],g[j+1])>0)
            {
                u=g[j];
                g[j]=g[j+1];
                g[j+1]=u;
            }
    for(i=0; i<n; i++)
        printf("%s\n",g[i]);
    return 0;

}
