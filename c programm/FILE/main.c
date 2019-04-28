#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *q,*r;
    //p=fopen("1.txt","r");
    q=fopen("2.txt","a");
    r=fopen("3.txt","a");
    int i,j,n,a[100],k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        fprintf(q,"%d ",a[i]);
    }
    fprintf(q,"\n\n");
    scanf("%d",&j);
    for(i=0; i<n; i++)
        if(j==a[i])
        {
            k++;
            fprintf(r,"%d ",i);
        }
    if(k>0)
        fprintf(r,"\n\n");
    if(k==0)
        fprintf(r,"not found\n\n");
    //fclose(p);
    fclose(q);
    fclose(r);
    return 0;
}
