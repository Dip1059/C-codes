#include<stdio.h>

int main()
{
    int j,i,k=5,l=5,p=0;
    for(i=0; i<l; i++)
    {
        if(i>k)
        {
            p=i-1;
            k=p+l-1;
        }
        else if(i==l-1)
        {
            p=i;
            k=p+l;
        }
        for(j=p; j<k; j++)
        {

            if(i>j)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n\n");
        k--;

    }

}
