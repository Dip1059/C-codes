#include<stdio.h>
int main()
{
    char a[101];
    int i,k=0;
    for(i=0; i<100; i++)
        scanf("%c",&a[i]);
    for(i=0; i<100; i++)
        k+=a[i];
    if(k%3==0)
        printf("the no is divisible by 3");
    else
        printf("the no is not divisible by 3");

    return 0;


}
