#include<stdio.h>
int main()
{
    char choice;

    scanf("%c",&choice);

    switch(choice)
    {

        case'a':
        case'e':
        case'i':
        case'o':
        case'u':printf("vowel\n");
                         break;

        default:printf("constant\n");
                         //break;

    }


    return 0;

}
