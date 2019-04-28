#include <stdio.h>

int wt[11]={0,8,2,6,9,1,25,7,11,3,10},lt[11]={-1,-1,-1,0,-1,-1,10,2,4,-1,7},rt[11]={-1,9,-1,-1,5,-1,8,-1,3,-1,1};

void display(int root)
{
    int l=lt[root];
    int r=rt[root];
    printf("root=%d\t    ",wt[root]);
    if(l==-1)
        printf("No left\t  ");
    else
        printf("left=%d\t",wt[l]);
    if(r==-1)
        printf("No right\t  ");
    else
        printf("right=%d",wt[r]);

    return;
}

int main()
{
    int n,i;
k:  printf("Enter the root value=");
    scanf("%d",&n);
    printf("\n");
    for(i=0; i<11; i++)
        if(n==wt[i])
            break;

    if(i==11)
        printf("Invalid root value");
    else
        display(i);
    printf("\n\n\n\n\n");
    //getche();
    //system("cls");
    goto k;
    return 0;
}
