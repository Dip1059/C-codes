#include<stdio.h>
int main()
{
    int i,j,k,l,t,m,p,o;
z:
    printf("Players: ");
    scanf("%d",&p);
    int n=0;
    if(p<=6)
    {
        printf("\nMatch with per player: ");
        scanf("%d",&m);
        for(i=1; i<p; i++)
            n++;
        for(j=2; j<p; j++)
            n++;
        for(k=3; k<p; k++)
            n++;
        for(l=4; l<p; l++)
            n++;
        for(o=5; o<p; o++)
            n++;
        t=n*m;
        printf("\nTotal match: %d \n\n----\n\n",t);
    }
    else
    printf("\nSystem error\n\n----\n\n");
    goto z;
    return 0;
}

