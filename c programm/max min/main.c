#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,ar[5];
     for(i=0;i<5;i++)
      scanf("%d",&ar[i]);

        for(i=0;i<4;i++)
            for(j=0;j<4;j++)
            if(ar[j]<ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;

            }
    printf("The number is max %d\nThe min number is %d",ar[0],ar[4]);
    return 0;
}
