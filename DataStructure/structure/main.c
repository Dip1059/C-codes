#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[56];
    char id[67];
    int age;
}mredul;

int main()
{
    int i;
    mredul x[2];
    for(i=0;i<2;i++)
    {
        scanf("%s%s%d",x[i].name,x[i].id,&x[i].age);
    }

    for(i=0;i<2;i++)
        printf("%s\n%s\n%d\n",x[i].name,x[i].id,x[i].age);
    return 0;
}
