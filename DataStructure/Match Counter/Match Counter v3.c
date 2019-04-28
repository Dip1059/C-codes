#include<stdio.h>
int main()
{
    int i,j=0,k=0,m,n;
l:
    printf("enter no of players: ");
    scanf("%d",&n);
    if(n!=1&&n!=0)
    {
        printf("\nenter no of matches with per player: ");
        scanf("%d",&m);
    }
    for(i=1; i<=n; i++)
    {
        j=j+k;
        k++;
    }
    printf("\ntotal matches: %d\n\n\n",j*m);
    j=0;
    k=0;
    goto l;
    return 0;

}
