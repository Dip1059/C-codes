#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int i=0;
typedef struct std
{
    char a[23];
    int b;
    struct std* j;
} st;

//Create LInk LIsts;
//Here i Inserted 5 elements;
st* e(st* l)
{
    st* y;
r:
    scanf("%s%d",l->a,&l->b);
    l->j=(st*)malloc(sizeof(st));
    i++;
    if(i==1)
        y=l->j;
    if(i==5)
    {
        l->j=NULL;
        return y;
    }
    else
    {
        l=l->j;
        goto r;
    }
}

//Print elements of linked lists;
int d(st* r)
{
    while(r!=NULL)
    {
        printf("%s  %d\n\n",r->a,r->b);
        r=r->j;
    }
}

//1st a insert;
st* firstinsert(st* m)
{
    st* NEW;
    NEW=(st*)malloc(sizeof(st));
    scanf("%s%d",NEW->a,&NEW->b);
    NEW->j=m;
    m=NEW;
    return m;
}

//Middle a insert;
//here i'm iserting betwteen 2nd and 3rd element;
int midinsert(st* q)
{

    st* NEW1;
    NEW1=(st*)malloc(sizeof(st));
    scanf("%s%d",NEW1->a,&NEW1->b);
    NEW1->j=q->j;
    q->j=NEW1;

}

//Last a insert;
int Lastinsert(st* z)
{
    st* k;
    st* NEW2;
    NEW2=(st*)malloc(sizeof(st));
    scanf("%s%d",NEW2->a,&NEW2->b);
    printf("\n");
    while(z!=NULL)
    {
        if(z->j==NULL)
        {
            k=z;
            break;
        }
        z=z->j;
    }
    z->j=NEW2;
    NEW2->j=NULL;
}

//1st a delet;
st* fstdelet(st* x)
{
    x=x->j;
    return x;
}

//Middle a delet;
//here i'm deleting 3rd element;
int middlet(st* k)
{
    k->j=k->j->j;
}

//Last a delet;
int lstdlt(st* n)
{
    st* p;
    while(n!=NULL)
    {
        if(n->j->j==NULL)
        {
            p=n;
            break;
        }
        n=n->j;
    }
    p->j=NULL;
}

int main()
{
    st* u;
    st* o;
    u=(st*)malloc(sizeof(st));
    o=e(u);
    //u=fstdelet(u);
    //middlet(o);
    //lstdlt(u);
    //u=firstinsert(u);
    //midinsert(o);
    //Lastinsert(u);
    printf("\n\n\n");
    d(u);
    return 0;
}
