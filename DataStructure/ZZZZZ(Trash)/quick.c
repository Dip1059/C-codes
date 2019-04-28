#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int cmp( const void *a , const void *b)
{
    int *x = (int *) a;
    int *y = (int *) b;
}

int main ()
{
    int i,n,k;

    scanf("%d",&n);

    int ar[n];

    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);

    qsort(ar , n);
}

