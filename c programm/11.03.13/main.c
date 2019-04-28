#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a=10,*z;
    z=&a;

    printf("%x\n",&a);
    printf("%d\n",*z);
    printf("%x\n",z);
    printf("%x\n",&z);
    return 0;
}
