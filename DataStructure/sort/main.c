#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp;
    int data[5];

    for(i=0;i<5;i++)
        scanf("%d",&data[i]);

    for(i=0;i<5;i++)
    {
        temp=data[i];

        for(j=i-1;j>=0;j--)
            if(temp<data[j])
            data[j+1]=data[j];
        else
            break;
        data[j+1]=temp;
    }

    for(j=0;j<5;j++)
        printf("%d  ",data[j]);

        return 0;
}
