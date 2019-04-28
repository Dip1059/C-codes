#include<stdio.h>

int main()
{
    int i,j,k,m,n,o;
d:
    printf("enter the no of rows of 1st mat:");
    scanf("%d",&m);
    printf("\nenter the no of columns of 1st mat which is equal to the no of rows of 2nd mat:");
    scanf("%d",&n);
    printf("\nenter the no of columns of 2nd mat:");
    scanf("%d",&o);
    printf("\nEnter the 1st mat: ");
    int a[m][n],b[n][o],c[m][o];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter the 2nd mat: ");
    for(j=0; j<n; j++)
        for(k=0; k<o; k++)
            scanf("%d",&b[j][k]);
    for(i=0; i<m; i++)
        for(k=0; k<o; k++)
            c[i][k]=0;
    printf("\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    printf("\n*\n\n");
    for(j=0; j<n; j++)
    {
        for(k=0; k<o; k++)
            printf("%d\t",b[j][k]);
        printf("\n");
    }
    printf("\n=\n\n");
    for(i=0; i<m; i++)
        for(k=0; k<o; k++)
            for(j=0; j<n; j++)
                c[i][k]+=a[i][j]*b[j][k];
    for(i=0; i<m; i++)
    {
        for(k=0; k<o; k++)
            printf("%d\t",c[i][k]);
        printf("\n");
    }
    printf("\n\n\t\t- - - \n\n");
    goto d;
    return 0;
}
