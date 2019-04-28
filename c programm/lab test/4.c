#include<stdio.h>
#include<string.h>
#include<malloc.h>
 typedef struct node
 {
     int ball;
     struct node *next;
 }Node;



 int main()
 {

     FILE *f;
     f=fopen("/home/groupa/Desktop/rabby/data.txt","r");
     if(f==NULL)
     {
         printf("file error!");
         return 0;
     }
     int m,n;
    fscanf(f,"%d%d",&n,&m);
    Node *list[n],*ptr,*nd;

    int i,a,ind;
    for(i=0;i<m;i++)
        list[i]=NULL;
    for(i=0;i<m;i++)
    {
        fscanf(f,"%d",&a);

        nd=(Node *)malloc(sizeof(Node));
        nd->ball=a;
        nd->next=NULL;

        ind =(a*a)%n;

        ptr=list[ind];
        if(ptr==NULL)
            list[ind]=nd;
        else{
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=nd;

        }

    }
    fclose(f);

    for(i=0;i<n;i++)
    {
        ptr=list[i];
    printf("%d=>",i);
    while(ptr!=NULL)
    {
    printf("%d,",ptr->ball);
    ptr=ptr->next;
    }
    printf("\n");
    }
    return 0;

 }


