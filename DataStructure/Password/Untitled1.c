#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int q()
{
    int i=0,j,k=10,l;
    char a[100];
    FILE *p;
    p=fopen("C:\\Users\\DELL\\Desktop\\1.txt","r");

    while(fscanf(p,"%c",&a[i])==1)
    {

    if(a[i]==EOF)
        break;
    //fscanf(p,"%c",&a[i]);
    i++;
    }
    puts(a);
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
}*/


int main()
{
    char a[100],b[100];
    int i=0,n,j,k;
    FILE *p;
    p=fopen("C:\\Users\\DELL\\Desktop\\5.txt","w");
v:
    printf("Enter New Password: ");
    for(i=0; i<100; i++)
    {
        a[i]=getch();
        if(a[i]=='\r')
            break;
        printf("*");
    }
    a[i]='\0';
    printf("\n\nConfirm Ur Password: ");
    for(i=0; i<100; i++)
    {
        b[i]=getch();
        if(b[i]=='\r')
           break;
        printf("*");
    }
    b[i]='\0';
    k=i;

    if(strcmp(a,b)==0)
    {
        fprintf(p,"%d\n",k-1);
        for(i=0; i<k; i++)
        fprintf(p,"%c",b[i]);
        printf("\nPassword is saved, Congratulations ^_^\n");
    }
    else
    {
        printf("\nError,Confirmed password is incorrect\n\n\n");
        goto v;
    }
    fclose(p);
    //printf("\n\n\n");
    //printf("Now,\n");
    //getchar();
   // system("cls");
    //i=0;
    //q();
   // system("C:\\Users\\DELL\\Desktop\\a -s");
    return 0;
}

