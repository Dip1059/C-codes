#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i=0;
typedef struct std
{
    char a[13];
    int b;
    struct std* next;
    struct std* prev;
} st;

int t(st* d)
{
    st* c;
    c=d;
g:
    i++;
    if(i<=5)
    {
        scanf("%s%d",d->a,&d->b);
        if(i==1)
            d->prev=NULL;
        else
        {
            d->prev=c;
            c=c->next;
        }
        d->next=(st*)malloc(sizeof(st));
        d=d->next;
        goto g;
    }
    else
    {
        d->prev=c;
        d->next=NULL;
    }
}

int f(st* j)
{
    st* r;
    while(j!=NULL)
    {
        r=j;
        printf("%s  %d\t",j->a,j->b);
        j=j->prev;
        if(j==NULL)
            printf("0  0\n\n");
        else
            printf("%s  %d\n\n",j->a,j->b);
        j=r->next;
    }
}

int main()
{
    st* head;
    head=(st*)malloc(sizeof(st));
    t(head);
    printf("\n\n\n");
    f(head);
    return 0;
}
