#include<stdio.h>
#include<stdlib.h>

int main()
{
    long *z;

    *z=10;
    printf("%x\n%x\n%ld",&z,z,*z);

    return 0;


}
