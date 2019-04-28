#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int por()
{
    int j=0,i,k=0,n,o,p,t=0,u=0,q,r,s,g=0;
    long long l=0;
    char x[100];
z:
    if(g>0)
    {
        gets(x);
        system("cls");
    }
    printf("enter ur birth year, month, day: ");
    scanf("%d%d%d",&n,&o,&p);
    printf("enter the current date(year,month,date): ");
    scanf("%d%d%d",&s,&r,&q);
    if(n<=2013&&s==2013&&s>=n&&r<=12&&q<=31&&o<=12&&p<=31&&n>0&&s>0&&o>0&&p>0&&q>0&&r>0)
    {
        if(o<=r)
        {
            for(i=2012; i>=n; i-=4)
                j++;
            k=(s-n)*365;
            for(i=o; i<r; i++)
            {
                if(i==1||i==3||i==5||i==7||i==8)
                    u=31;
                else if(i==2)
                    u=28;
                else
                    u=30;
                t+=u;
            }
        }
        else
        {
            for(i=2012; i>=n+1; i-=4)
                j++;
            k=(s-n-1)*365;
            for(i=o; i<=12; i++)
            {
                if(i==10||i==12)
                    u=31;
                else if(i==9||i==11)
                    u=30;
                t+=u;
            }
            for(i=1; i<r; i++)
            {
                if(i==1||i==3||i==5||i==7||i==8)
                    u=31;
                else if(i==2)
                    u=28;
                else
                    u=30;
                t+=u;
            }
            t-=1;
        }
        l=(q-p)+t+k+j;
        printf("\nur current age is %lld days\n\n\n",l);
    }
    else
    {
        if(s<n||n>2013||n<=0)
            printf("\nur birth year is invalid\n");
        if(o>12||o<=0)
            printf("\nur birth month is invalid\n");
        if(p>31||p<=0)
            printf("\nur birth day is invalid\n");
        if(s>2013||s<2013)
            printf("\nthe current year is invalid\n");
        if(r>12||r<=0)
            printf("\nthe current month is invalid\n");
        if(q>31||q<=0)
            printf("\nthe current day is invalid\n");

    }

    getchar();
    //gets(x);
    //system("cls");
    g=1;
    j=0;
    k=0;
    t=0;
    u=0;
    goto z;
    return 0;
}
int main()
{
    int i=0,j,k=10,l;
    char a[100];
    FILE *p;
    p=fopen("D:\\DAta STRucTure\\Password\\1.txt","r");

    while(fscanf(p,"%c",&a[i])==1)
    {

        if(a[i]==EOF)
            break;
        //fscanf(p,"%c",&a[i]);
        i++;
    }
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
    if(k==0)
        return 0;
    else
    {
        char v[100];
        gets(v);
        system("cls");
        por();
    }
}

