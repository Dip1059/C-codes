#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,c;
    d:
    scanf("%d",&n);
    for(i=2;i<10;i++)

    if(n!=i)
    {
        if(n%i==0)
        printf("it's not a prime number\n");
        else
        printf("it's a prime number\n");}
    //else if(n==2)
    //printf("it's a prime number\n");

    goto d;
    return 0;
}
