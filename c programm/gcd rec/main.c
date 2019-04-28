#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
if(a==0) return b;
return gcd(b%a,a);}
int main()
{
    int x,a,b;
    scanf("%d%d",&a,&b);
    x=gcd(a,b);
    printf("%d",x);
    return 0;
}
