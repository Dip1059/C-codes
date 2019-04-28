#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
d:
    printf("enter the no of rows & column of the mats:");
    scanf("%d%d",&m,&n);
    printf("\nEnter the values of the mats: ");
    int a[m][n],b[m][n],c[m][n];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&b[i][j]);
    printf("\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\n+\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",b[i][j]);
        printf("\n");
    }
    printf("\n=\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\t\t- - - \n\n");
    goto d;
    return 0;
}
