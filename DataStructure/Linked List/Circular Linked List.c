#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i=0;
typedef struct std
{
    char a[13];
    int b;
    struct std* link;
} st;

int t(st* c)
{
    char n[2];
    st* d;
    //d=(st*)malloc(sizeof(st));
    //printf("d=%x\n",d);
    d=c;
g:
    //printf("d=%x\nc=%x\n",d,c);
    scanf("%s%d",c->a,&c->b);
    printf("y/other= ");
    scanf("%s",n);
    if(!strcmp(n,"y"))
    {
        c->link=(st*)malloc(sizeof(st));
       // printf("c->link=%x\n\n",c->link);
        c=c->link;
        goto g;
    }
    else
        c->link=d;
        //printf("c->link=%x\n",c->link);

}

int p(st* h)
{
    st* y;
    y=h;
    while(h!=NULL)
    {
        i++;
        if(i>1&&h==y)
            break;
        printf("%s  %d\n\n",h->a,h->b);
        h=h->link;
    }
}

int main()
{
    st* head;
    head=(st*)malloc(sizeof(st));
    //printf("head=%x\n",head);
    t(head);
    printf("\n\n\n");
    p(head);
    return 0;
}

