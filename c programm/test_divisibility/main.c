#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ara[200];
    int i,n,sum=0,sum4=0,sum8,eleven,eleven1=0,eleven2=0;
    printf("Please enter the length of your number: ");
    scanf("%d",&n);
    getchar();
    printf("Please enter the number: ");
    for(i=0;i<n;i++){
        scanf("%c",&ara[i]);
        if(i%2==0)eleven1=eleven1+ara[i]-48;

        else eleven2=eleven2+ara[i]-48;
        sum=sum+ara[i]-48;}
    i--;
    //conditions for divisibility by two starts here:
    if((ara[i]-48)%2==0)
        printf("the number is divisible by 2\n");
    else printf("the number is not divisible by 2\n");
    //conditions for divisibility by 3 starts here:
    if(sum%3==0) printf("the number is divisible by 3\n");
    else printf("the number is not divisible by 3\n");
    //conditions for divisibility by 4 starts here:
    sum4=ara[i]-48+10*((ara[i-1])-48);
    if(sum4%4==0)
        printf("the number is divisible by 4\n");
    else printf("the number is not divisible by 4\n");
    //conditions for divisibility by 5 starts here:
    if((ara[i]-48)%5==0)
        printf("the number is divisible by 5\n");
    else printf("the number is not divisible by 5\n");
    //conditions for divisibility by 6 starts here:
    if(sum%3==0 && (ara[i]-48)%2==0) printf("the number is divisible by 6\n");
    else printf("the number is not divisible by 6\n");
    //conditions for divisibility by 8 starts here:
    sum8=ara[i]-48+10*((ara[i-1])-48)+100*((ara[i-2])-48);
    if(sum8%8==0)
        printf("the number is divisible by 8\n");
    else printf("the number is not divisible by 8\n");
    //conditions for divisibility by 9 starts here:
    if(sum%9==0) printf("the number is divisible by 9\n");
    else printf("the number is not divisible by 9\n");
    //conditions for divisibility by 10 starts here:
    if((ara[i]-48)==0)
        printf("the number is divisible by 10\n");
    else printf("the number is not divisible by 10\n");
    //conditions for divisibility by 11 starts here:
 eleven=eleven2-eleven1;
    if(eleven%11==0) printf("the number is divisible by 11");
    else printf("the number is not divisible by 11");

return 0;
}
