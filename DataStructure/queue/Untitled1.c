#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 5

int queue[N];
int front=0;
int rear=0;

void enque()
{
    if(front==0&&rear==N-1&&front==rear+1)
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
    if(front==0&&rear==0&&front>rear)
        printf("underflow");

    else
    {
        if(front==N)
            front=0;
        front++;
    }

void display()
{
    int i;
    if(front<=rear)
    {
        for(i=front; i<=rear; i++)
            printf("queue[%d]=%d\n",i+1,queue[i]);

    }
    else
    {
        for(i=front; i<=rear; i++)
        {
            printf("queue[%d]=%d\n",i+1,queue[i]);
            if(front==N)
                front=0;
        }
    }
}

int main()
{

}

















}

