#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0,j,k=10,l;
    char a[100];
    FILE *p;
    p=fopen("C:\\Users\\DELL\\Desktop\\5.txt","r");
    fscanf(p,"%d",&l);
    printf("%d\n",l);
    for(i=0; i<=l; i++)//while(fscanf(p,"%c",&a[i])==1)
    {
    fscanf(p,"%c",&a[i]);
    //if(a[i]=='\0')
      //break;
    //fscanf(p,"%c",&a[i]);
    }
    a[i]='\r';
    puts(a);
    char b[100];
    printf("\nU have 10 chances\n");
    for(i=0; i<10; i++)
    {
        printf("Enter Password: ");
        for(j=0; j<100; j++)
        {
            b[j]=getch();
            if(b[j]=='\r')
                break;//printf("%c",b[j]);
            printf("*");
        }
        b[i]='\0';
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

