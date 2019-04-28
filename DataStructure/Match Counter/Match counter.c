#include<stdio.h>
int main()
{
    int p,m,t;
z:

    printf("Enter no of players: ");
    scanf("%d",&p);
    if(p==1)
        printf("\nNo of total games: 0\n\n-----\n\n");
    else if(p>1)
    {printf("\nEnter the no of games per player vs per player: ");
    scanf("%d",&m);
    t=m*p*(p-1)/2;
    printf("\nNo of total games: %d\n\n-----\n\n",t);}
    goto z;
    return 0;




}
