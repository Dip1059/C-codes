#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct student
{
    char id[12];
    float gpa;
    struct student* ptr;
} student;

//Create linked lists;
int insert(student* start)
{
    char choice[2];
    scanf("%s",start->id);
    scanf("%f",&start->gpa);
    printf("\nAgain? [y/other]=");
    scanf("%s",choice);
    if(strcmp(choice,"y")==0)
    {
        start->ptr=(student *)malloc(sizeof(student));
        insert(start->ptr);
    }
    else
        start->ptr=NULL;
}

//print the elements;
void travers(student* start)
{
    while(start!=NULL)
    {
        printf("%s  %f\n\n",start->id,start->gpa);
        start=start->ptr;
    }
}
//Linear Serach;
student* search(student *start,char item[])
{
    while(start!=NULL)
    {
        if(!strcmp(start->id,item))
            return start;
         else
            start=start->ptr;
    }
     return NULL;

}

//1st a insert;
student* firstinsert(student* start)
{
    student* NEW;
    NEW=(student*)malloc(sizeof(student));
    scanf("%s%f",NEW->id,&NEW->gpa);
    NEW->ptr=start;
    start=NEW;
    return start;
}

int main()
{
    char i[]="20121201059";
    student* head;
    head=(student*)malloc(sizeof(student));
    insert(head);
    head=firstinsert(head);
    printf("\n\n");
    travers(head);
    head=search(head,i);
    if(head==NULL)
        printf("\nitem doesn't exist\n");
    else
        printf("\nitem exists\nad=%x  id=%s  gpa=%f\n",head,head->id,head->gpa);
    return 0;
}
