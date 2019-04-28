#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[40];

    int run;


} ad;

int main()
{
    int i=0,j=0,k;
    char *t,*o[3];
    ad x[5];
    FILE *p;
    p=fopen("C:/Users/DELL/Desktop/2.txt","r");
    while (fscanf(p,"%s%d",x[i++].name,&x[j++].run)!=EOF);

    for(i=0; i<3; i++)
        o[i]=x[i].name;

    for(i=0; i<3; i++)
        for(j=0; j<2; j++)
        {
            if(x[j].run<x[j+1].run)
            {
                k=x[j].run;
                x[j].run=x[j+1].run;
                x[j+1].run=k;
                t=o[j];
                o[j]=o[j+1];
                o[j+1]=t;
            }
            else if(x[j].run==x[j+1].run)
                if(strcmp(o[j],o[j+1])>0)
                {
                    t=o[j];
                    o[j]=o[j+1];
                    o[j+1]=t;
                }
        }
    for(i=0; i<3; i++)
        printf("%s %d\n",o[i],x[i].run);

    return 0;

}


