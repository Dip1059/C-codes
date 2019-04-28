#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[9],b[9];
    int i;
    for(i=0; i<9; i++)
        scanf("%c",&a[i]);
    for(i=0; i<9; i++)
        scanf("%c",&b[i]);
    for(i=0; i<9; i++)
        printf("%c",a[i]);
    for(i=0; i<9; i++)
        printf("%c",b[i]);

    for(i=0; i<8; i++)
    {
        if(a[i]!=b[i])
        {
            i--;
            break;
        }
    }

    /*if(strcmp(a,b)==0)
        printf("\nPal");
    else
        printf("\nNot Pal");
*/
    printf("i=%d",i);
    if(i==8)
        printf("\nPal");
    else
        printf("\nnot Pal");




}

