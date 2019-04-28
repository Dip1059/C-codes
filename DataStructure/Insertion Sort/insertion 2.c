#include <stdio.h>
#include <stdlib.h>
int main()
{
    int data[5];
    int i,j,temp;
    for(i=0; i<5; i++)
        scanf("%d",&data[i]);
    for(i=1; i<5; i++)
    {
        temp=data[i];
        for(j=i-1; j>=0; j--)
            if(temp<data[j])
                data[j+1]=data[j];
            else
                break;
        data[j+1]=temp;
    }

    printf("%d %d %d %d %d",data[0],data[1],data[2],data[3],data[4]);


    return 0;
}

