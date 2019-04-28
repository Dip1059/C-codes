#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j=1,l,k=0;
a:
    scanf("%d",&l);
    if(l==1)
        printf("%d\n\n",l);
    else
        for(i=2; i<=900000000; i++)
            if(i%2==0||i%3==0||i%5==0)
            {
                if(i%2==0)
                    k=i/2;
                else if(i%3==0)
                    k=i/3;
                else if(i%5==0)
                    k=i/5;
                while(1)
                {
                    if(k%2!=0)
                        if(k%3!=0)
                            if(k%5!=0)
                                break;
                    if(k%2==0)
                        k=k/2;
                    else if(k%3==0)
                        k=k/3;
                    else if(k%5==0)
                        k=k/5;
                }
                if(k==1||k%2==0||k%3==0||k%5==0)
                {
                    j++;
                    if(j==l)
                        printf("%d\n\n",i);
                }
                if(j==l)
                    break;
            }
    j=1;
    k=0;
    goto a;
    return 0;
}
