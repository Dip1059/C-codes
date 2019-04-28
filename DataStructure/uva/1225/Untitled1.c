#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&t);
        if(t==1)
            printf("0 1 0 0 0 0 0 0 0 0\n");
        else if(t==0)
            printf("0 0 0 0 0 0 0 0 0 0\n");
        else if(t==2)
            printf("0 1 1 0 0 0 0 0 0 0\n");
        else if(t==3)
            printf("0 1 1 1 0 0 0 0 0 0\n");
        else if(t==4)
            printf("0 1 1 1 1 0 0 0 0 0\n");
        else if(t==5)
            printf("0 1 1 1 1 1 0 0 0 0\n");
        else if(t==6)
            printf("0 1 1 1 1 1 1 0 0 0\n");
        else if(t==7)
            printf("0 1 1 1 1 1 1 1 0 0\n");
        else if(t==8)
            printf("0 1 1 1 1 1 1 1 1 0\n");
        else if(t==9)
            printf("0 1 1 1 1 1 1 1 1 1\n");
        else if(t==10)
            printf("1 2 1 1 1 1 1 1 1 1\n");
        else if(t==11)
            printf("1 4 1 1 1 1 1 1 1 1\n");
        else if(t==12)
            printf("1 5 2 1 1 1 1 1 1 1\n");
        else if(t==13)
            printf("1 6 2 2 1 1 1 1 1 1\n");
        else if(t==14)
            printf("1 7 2 2 2 1 1 1 1 1\n");
        else if(t==15)
            printf("1 8 2 2 2 2 1 1 1 1\n");
        else if(t==16)
            printf("1 9 2 2 2 2 2 1 1 1\n");
        else if(t==17)
            printf("1 10 2 2 2 2 2 2 1 1\n");
        else if(t==18)
            printf("1 11 2 2 2 2 2 2 2 1\n");
        else if(t==19)
            printf("1 12 2 2 2 2 2 2 2 2\n");
        else if(t==20)
            printf("2 12 3 2 2 2 2 2 2 2\n");
        else if(t==21)
            printf("2 13 4 2 2 2 2 2 2 2\n");

    }
    return 0;
}
