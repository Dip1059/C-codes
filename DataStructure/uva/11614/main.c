#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,j=0,k=0,l;
    scanf("%d",&l);
    while(l--)
    {
        scanf("%d",&n);
        for(;;)
        {
            k++;
            i=i+k;
            if(i>=n)
            {
                if(i>n)
                    k--;
                break;
            }
        }
        printf("%d\n",k);
        i=0;j=0;k=0;
    }
    return 0;
}
