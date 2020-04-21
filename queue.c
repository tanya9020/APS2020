#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 5
#define TRUE 1
#define FALSE 0

struct queue
{
    int front;
    int rear;
    int items[MAXQUEUE];
};
typedef struct queue QUEUE;

int empty(QUEUE *q)
{
    if(q->front>q->rear)
        return TRUE;
    else
        return FALSE;
}
int full(QUEUE *q)
{
    if (q->rear==MAXQUEUE-1)
        return TRUE;
    else
        return FALSE;
}

void enqueue(QUEUE *q)
{
    if (full(q))
    {
        printf("queue full\n");
        return;
    }
    int x;
    printf("enter item to enqueue\n");
    scanf("%d",&x);
    q->rear++;
    q->items[q->rear]=x;
    printf("enqueue successful\n");
    return;
}
void dequeue(QUEUE *q)
{
    if(empty(q))
    {
        printf("queue empty\n");
        return;
    }
    int x;
    x=q->items[q->front];
    q->front++;
    printf("dequeue item is %d \n",x);
    return;
}
void display(QUEUE * q)
{
    int i=0;
    if(empty(q))
    {
        printf("queue empty\n");
        return;
    }
    for(i=q->front;i<=q->rear;i++)
     printf("|%d|\n",q->items[i]);
      /// while(q->rear<MAXQUEUE)
       ///{
      ///  printf("|%d|/n",q->items[q->rear]);
      /// }
    ///return;
}

int main()
{
    QUEUE q;
    q.front=0;
    q.rear=-1;
    int choice=0;
    while(1)
    {
        printf("MENU\n");
        printf("1-enqueue\n2-dequeue\n3-display\n4-exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: enqueue(&q);
                break;
        case 2: dequeue(&q);
                break;
        case 3: display(&q);
                break;
        case 4: printf("terminating\n");
        exit(0);

    }
    }
    return 0;
}
