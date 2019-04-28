#include <stdio.h>
#include <stdlib.h>
long long int i=0;
void tower(int n,char *B,char *A,char *E)
{

    if(n==1)
    {
        printf("\n%s->%s\n\n",B,E,i++);
        return;
    }
    //printf("n=%d\n",n);
    //printf("B=%s A=%s E=%s\n",B,A,E);

    tower(n-1,B,E,A);
    printf("\n%s->%s\n\n",B,E,i++);
    tower(n-1,A,B,E);
}

int main()
{
    char *A="AUX",*B="BEG",*E="END";
    tower(7,B,A,E);
    printf("\nMOve=%lld\n",i);
    return 0;
}
