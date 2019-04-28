#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,j,k=10,l;
    char a[100];
    FILE *p;
    p=fopen("1.txt","r");

    while(fscanf(p,"%c",&a[i])==1)
    {

    if(a[i]==EOF)
        break;
    //fscanf(p,"%c",&a[i]);
    i++;
    }
    //puts(a);
    char b[100];
    printf("U have 10 chances\n");
    for(i=0; i<10; i++)
    {
        printf("Enter Password: ");
        for(j=0; j<5; j++)
        {
            b[j]=getch();
            //printf("%c",b[j]);
            printf("*");
        }
        if(strcmp(a,b)==0)
        {
            printf("\nAccess Granted\n");
            break;
        }
        else
        {
            printf("\nWrong Password");
            k--;
            printf("\nU have %d chances left\n\n",k);
        }
    }
    fclose(p);
    return 0;
}
