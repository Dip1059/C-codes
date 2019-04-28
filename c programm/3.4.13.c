#include<stdio.h>
int main()
{
    int n,b=2,c,d;
    q:
    scanf("%d",&n);
    c=n/b;
    d=n-b*c;
    if(d==0)
    {printf("even\n",n);}


    else
    {printf("%odd\n",n);}

    goto q;
    return 0;



}
