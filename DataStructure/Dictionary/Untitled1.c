#include<stdio.h>
#include<string.h>

typedef struct dictionary
{
    char word[100];
    char mean[100];
}dic;

int main()
{
    int i=0,k=0,j=0;
    dic d[100];
    char w[100];
    char *b[100];
    int len;
    FILE *p,*q;
    p=fopen("word.txt","r");
    q=fopen("mean.txt","r");
    while(!feof(p))
    {
        fgets(d[i].word,100,p);
        fgets(d[i].mean,100,q);
        b[i]=d[i].word;
        j++;
        i++;
    }

    gets(w);
    len=strlen(w);
    w[len]='\n';
    w[len+1]=NULL;

    for(i=0; i<j-2; i++)
        if(strcmp(b[i],w)==0)
        {
            k=0;
            printf("%s",d[i].mean);
            break;
        }
        else
            k=1;

    if(k==1)
        printf("not found");

    return 0;

}


