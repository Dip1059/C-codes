#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    int data[n];
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    for(i=1;i<n;i++)
        {
            temp=data[i];
            for(j=i-1;j>=0;j--)
                if(temp<data[j])
                {   k++;
                    data[j+1]=data[j];
                }
                else
                    break;

            data[j+1]=temp;
        }

    for(j=0;j<n;j++)
        printf("%d\t",data[j]);
    printf("\n\ncomparision=%d times\n",k);

return 0;
}

