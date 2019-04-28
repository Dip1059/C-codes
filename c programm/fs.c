
#include<stdio.h>

unsigned long long int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);

}

int main()
{
    int n;
    unsigned long long int t;
    e:
    scanf("%d",&n);
    if(n==0)
    printf("1\n");
    else
    {t=fact(n);
    printf("%ulld\n",t);}
    goto e;
    return 0;



}
