#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

typedef struct student
{
    char name[40];
    float age;
    char id[11];
    struct student *next;

}student;

int insert(FILE *in, student *z);
int display(student *z);

int main()
{
    student *z;
    FILE *in;

    in=fopen("D:\Students.txt","r");
    if(in=NULL)
    {
        printf("File is not available");
        return 0;
    }

    z->next=(student *) malloc(sizeof (student));
    //scanf("%[^\n]s",z->name);
    //scanf("%f%s",&z->age,z->id);
    insert(z);
    printf("%s\t%f\t%s\n",z->name,z->age,z->id);

    fclose(in)
    display( z;)
    return 0;
}

int insert (FILE *fin, student *z)
{
    int c;
    scanf("%d",&c);
    c=fscanf(fin,"%[^\n]s",z->name);
    c=fscanf("%f\t%s\n",&z->age,z->id);
    if(c==3)
    {
        z->next=(student *) malloc(sizeof (student));
        insert (fin,z->next);
    }
    else
        z->next=NULL;

    return 0;
}

int display(student *z)
{
    student *ptr
    ptr=z

    while(z!=NULL)
    {
        printf("%s\t%s\t%f\n",z->id,z->name,z->age);
        z=z->next;
    }


}
