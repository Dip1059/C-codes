#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j=0,k=10;
    char a[100];
    FILE *p;
    p=fopen("C:\\Users\\DELL\\Desktop\\1.txt","r");
    fscanf(p,"%s",a);
    char b[100];
    printf("U have 10 chances\n");
    for(i=0; i<10; i++)
    {
        printf("Enter Password(5 keywords): ");
        scanf("%s",b);
        if(strcmp(a,b)==0)
        {
            printf("Access Granted\n");
            break;
        }
        else
        {
            printf("Wrong Password");
            k--;
            printf("\nU have %d chances left\n\n",k);
        }
    }
    fclose(p);
    return 0;
}
