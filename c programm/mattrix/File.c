#include<stdio.h>
int main()
{
    freopen("C:/Users/DELL/Desktop/1.txt","r",stdin);
    freopen("C:/Users/DELL/Desktop/1.txt","a",stdout);

    int i,j=0,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        j+=i*i;
    printf("\n%d",j);
    return 0;



}
