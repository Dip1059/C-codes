#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float k;
d:
    printf("Enter the num: ");
    scanf("%d",&n);
    if(n==1||n==0)
    {
        if(n==1)
        {
            printf("i=2\n");
            printf("sqrt(1)=1\n");
            printf("Here the logic i=2 is greater than sqrt(1)=1 but we always know that 1 is not a prime num\n\n\t\t\t\t   --------\n\n");
        }
        else
        {
            printf("i=2\n");
            printf("sqrt(0)=0\n");
            printf("Here the logic i=2 is greater than sqrt(0)=0 but we always know that 0 is not a prime num\n\n\t\t\t\t   --------\n\n");
        }
    }
    else
    {
        k=sqrt(n);
        for(i=2; i<=sqrt(n); i++)
            if(n%i==0)
                break;
        printf("i=%d\n",i);
        printf("sqrt(%d)=%f\n",n,k);
        if(i>k)
            printf("Here the logic i=%d is greater than sqrt(%d)=%f so, %d is prime\n\n\t\t\t\t   --------\n\n",i,n,k,n);
        else
            printf("Here the logic i=%d is not greater than sqrt(%d)=%f so, %d is not prime\n\n\t\t\t\t   --------\n\n",i,n,k,n);
    }

    goto d;
    return 0;
}
