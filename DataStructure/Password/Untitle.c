#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i=0,n;
    FILE *p;
    p=fopen("C:\\Users\\DELL\\Desktop\\1.txt","w");
v:
    printf("Enter New Password: ");
    //for(i=0; i<5; i++)

    gets(a);
    printf("\n\nConfirm Ur Password: ");
    //for(i=0; i<5; i++)
    gets(b);

    if(strcmp(a,b)==0)
    {
        fprintf(p,"%s",b);
        printf("\nPassword is saved, Congratulations ^_^\n");
    }
    else
    {
        printf("\nError,Confirmed password is incorrect\n\n\n");
        goto v;
    }
    fclose(p);
    return 0;
}
