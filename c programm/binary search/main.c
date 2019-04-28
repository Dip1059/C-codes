#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ar[5]={3,1,5,2,9};
    int i,j,k,n=5;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++){
        if (ar[j]>ar[j+1])
        {
            int temp;
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }
    }
    for(i=0;i<n;i++){
    printf("%d ",ar[i]);}
    int mid,low=0,high=4,find=2;
    mid=(low+high)/2;
    while(low<=high){
        if(find>ar[mid])
            low=mid+1;
        else if(find<ar[mid])
            high=mid-1;
        else if(find==ar[mid]){
            printf("yes");
        break;
    }
    mid=(low+high)/2;}
    return 0;
}
