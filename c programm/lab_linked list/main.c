#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>



typedef struct student{
    char name[40];
    float age;
    char id[11];
    struct student *next;}Student;

int insert(FILE *in, Student *z);
int display(Student *z);

int main()
{
    Student *z;
    FILE *in;

    in=fopen("/home/sadid/Documents/students.txt","r");
    if(in==NULL)
    {
        printf("Error in file opening");
        return 0;
    }

    z=(Student *)malloc(sizeof(Student));
    insert(in,z);
    fclose(in);

    display(z);

    return 0;
}

int insert(FILE *fin, Student *z){
    int c;
    c=fscanf(fin,"%s%f%s",z->name,&z->age,z->id);
    if(c==3)
    {
        z->next=(Student *)malloc(sizeof(Student));
        insert(fin,z->next);
    }
    else
        z->next=NULL;

    return 0;
}

int display(Student *z)
{
    Student *ptr;
    ptr=z;

    while(ptr!=NULL)
    {
        printf("%s\t%s\t%2.0f\n",ptr->id,ptr->name,ptr->age);
        ptr=ptr->next;
    }
}
