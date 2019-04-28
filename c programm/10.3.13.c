#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    long id;
    char *name[40];
    float age;

};

int main()
{
    struct student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%ld",&s[i].id);
        scanf("%s",&s[i].name);
        scanf("%f",&s[i].age);
    }
    printf("%ld",s[i].id);
    printf("%s",s[i].name);
    printf("%f",s[i].age);

    return 0;
}
