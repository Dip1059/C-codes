#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int ckpoint;
    FILE *cp,*pwd;

    cp=fopen("checkpoint.txt","r");
    if(cp==NULL)
    {
        cp=fopen("checkpoint.txt","w");
        fprintf(cp,"0");
        fclose(cp);
    }

    cp=fopen("checkpoint.txt","r");
    fscanf(cp,"%d",&ckpoint);
    fclose(cp);

    char password[20],mpassword[20];
    if(ckpoint==0)
    {
        printf("Please build a password : ");
        gets(password);

        pwd=fopen("password.txt","w");
        fprintf(pwd,"%s",password);
        fclose(pwd);

        cp=fopen("checkpoint.txt","w");
        fprintf(cp,"1");
        fclose(cp);

    }
    else goto a;

a:  pwd=fopen("password.txt","r");
    fscanf(pwd,"%s",password);
    fclose(pwd);

    printf("Please enter your password : ");
    gets(mpassword);

    if(strcmp(password,mpassword)!=0)
    {
        printf("Access Denied !\n");
        goto a;
    }
    else printf("Accessed !\n");


    return 0;
}
