#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    unsigned long long int a[n];
    a[0]=0;
    a[1]=1;
    for(i=2; i<=n; i++)
        a[i]=a[i-2]+a[i-1];
    //for(i=1; i<=n; i++)
            printf("%llu\n\n",a[n]);
        main();
    return 0;
}
