#include <stdio.h>
int main()
{
    int a,b,c;
e:
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a==b&&b==c&&a==c)
        printf("a & b & c equal\n");
    else if (a!=b&&b!=c&&a!=c)
    {
        if (a>b&&a>c)
            printf("a is bigger\n");
        else if (b>a&&b>c)
            printf("b is bigger\n");
        else if (c>a&&c>b)
            printf("c is bigger\n");
    }
    else if(a==c)
    {
        if (a>b)
            printf("a & c both are bigger\n");
        else
            printf("b is bigger\n");
    }
    else if(b==c)
    {
        if (b>a)
            printf("b & c both are bigger\n");
        else
            printf("a is bigger\n");
    }
    else if(a==b)
    {
        if (a>c)
            printf("a & b both are bigger\n");
        else
            printf("c is bigger\n");
    }
    goto e;
    return 0;
}
