#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front=0;
int rear=0;

void enque()
{
    if(front==0&&rear==N||front>0&&front==rear)
        printf("overflow");

    else
    {
        if(rear==N)
            rear=0;
        scanf("%d",&queue[rear]);
        rear++;
    }
}

void dque()
{
    if(front==0&&rear==0||rear==N&&front==rear)
        printf("underflow");

    else
    {
        if(front==N)
            front=0;
        front++;
    }
}

void display()
{
    int i=0,k=0;
    if(front<rear)
    {
        for(i=front; i<rear; i++)
            printf("queue[%d]=%d\n",++k,queue[i]);

    }
    else
    {
        for(i=front; i<N; i++)
            printf("queue[%d]=%d\n",++k,queue[i]);
        i=0;
        for(i=0; i<rear; i++)
            printf("queue[%d]=%d\n",++k,queue[i]);
    }
}

int main()
{
    char p;
    while(p!='0')
    {
        printf("1 for insert\n");
        printf("2 for delet\n");
        printf("3 for display\n");
        printf("4 for display front & rear\n");
        printf("0 for exit\n");
        printf("\nur option: ");
        scanf("%c",&p);
        printf("\n");

        switch(p)
        {
            case '1':enque();break;
            case '2':dque();break;
            case '3':display();break;
            case '4':printf("front=%d && rear=%d ",queue[front],queue[rear-1]);break;
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

