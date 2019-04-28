#include<stdio.h>
#include<stdlib.h>
#define maxstk 5

int stack[maxstk];
int top=0;
int j=0;

void push()
{
    if(top<maxstk)
    {
        scanf("%d",&stack[top]);
        top++;
    }
    else
        printf("overflow");
}

void pop()
{
    if(top!=0)
    {
        top--;
    }
    else
        printf("underflow");
}

void display()
{
    int i;
    for(i=top-1; i>=0; i--)
        printf("stack[%d]=%d\n",i+1,stack[i]);
}

int main()
{
    char p='\0';
    while(p!='0')
    {
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for display\n");
        printf("4 for display top\n");
        printf("0 for exit\n");
        printf("\nur option: ");
        scanf("%c",&p);
        printf("\n");

        switch(p)
        {
            case '1':push();break;
            case '2':pop();break;
            case '3':display();break;
            case '4':printf("top=%d  stack[top-1]=%d",top,stack[top-1]);break;
            case '0':break;
            default:;

        }
        //printf("press");
        char f;
        f=getch();
        system("cls");
    }
    return 0;
}













