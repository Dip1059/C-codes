#include <stdio.h>
#include <stdlib.h>
int fact(int n){
if(n==1) return 1;
return (n*fact(n-1));}
int main()
{
    int x,n;
    //scanf("%d",&n);
    x=fact(5);
    printf("%d",x);
    return 0;
}
