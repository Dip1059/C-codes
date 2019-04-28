#include<stdio.h>

int main()
{
    int i,j,k=0,l=2;
    for(i=0; i<5; i++)
    {

        for(j=l; j>=k; j--)
        {
            if(i==j&&i==0||i>=j&&i>0)
                printf("* ");
            else
                printf("  ");
        }
    printf("\n\n");
    if(i==2)
    {
        l=4;
        k=0;
        k++;
    }
    else if(i==3)
    {
        l=6;
        k=3;
        k++;
    }
    else
        k--;
    }
}
