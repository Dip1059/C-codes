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
    //y=(st*)malloc(sizeof(st));
    scanf("%s%d",l->a,&l->b);
    l->j=(st*)malloc(sizeof(st));
    i++;
    //if(i==4)
        //printf("\n%x\n",l);
    if(i==1)
        y=l->j;
    if(i==5)
    {
        //printf("%x\n",l);
        l->j=NULL;
        return y;
    }
    else
        e(l->j);
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
    //printf("\n\n");
    //d(start);

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
    st* NEW2;
    NEW2=(st*)malloc(sizeof(st));
    scanf("%s%d",NEW2->a,&NEW2->b);
    printf("\n");
    while(z!=NULL)
    {
        //printf("%x\n",z);
        z=z->j;
    }
    //printf("%x\n",z);
    //printf("%x\n",NEW2);
    z=NEW2;
    //printf("%x\n",z);
    NEW2->j=NULL;
    //printf("%x\n",NEW2->j);
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
    st* w;
    //w=(st*)malloc(sizeof(st));
    w=k->j;
    k->j=w->j;
}

//Last a delet;
int lstdlt(st* n)
{
    st* p;
   // p=(st*)malloc(sizeof(st));
    while(n!=NULL)
    {
        if(n->j->j==NULL)
        {
            p=n;
            /*printf("\n%x\n",p);
            printf("%x\n",p->j);
            printf("%x\n",p->j->j);*/
        }
        n=n->j;
    }
    p->j=NULL;
    //printf("%x\n",p->j);
}

int main()
{
    st* u;
    st* o;
    u=(st*)malloc(sizeof(st));
    //o=(st*)malloc(sizeof(st));
    o=e(u);
    //u=fstdelet(u);
    //middlet(o);
    //lstdlt(u);
    //u=firstinsert(u);
    //midinsert(o);
    //printf("\n%x\n",u);
    //Lastinsert(u);
    printf("\n\n\n");
    d(u);
    return 0;
}
