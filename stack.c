#include <stdio.h>
#include <stdlib.h>
#define STACKSIZE 5
#define TRUE 1
#define FALSE 0

struct stack
{
   int top;
   int items[STACKSIZE];
};
typedef struct stack STACK;

int empty(STACK *s)
{
    if (s->top==-1)
        return TRUE;
    else
        return FALSE;
}
int full(STACK *s)
{
    if(s->top==STACKSIZE-1)
        return TRUE;
    else
        return FALSE;
}
void push(STACK *s)
{
    if(full(s))
    {
        printf("stack full\n");
    return;
    }
    else
        printf("enter item to be pushed\n");
    int x;
    scanf("%d",&x);
    s->top++;
    s->items[s->top]=x;
    printf("push successful\n");
    return;
}
void pop(STACK *s)
{
    if (empty(s))
    {
        printf("stack empty\n");
        return;
    }
    int x;
    x=s->items[s->top];
    s->top--;
    printf("popped value is %d\n",x);
    return;
}
void peek(STACK *s)
{
    if (empty(s))
    {
        printf("stack empty\n");
        return;
    }
        int x;
    x=s->items[s->top];
    printf("stack top is %d\n",x);
    return;
}
void print(STACK *s)
{

     int i;
    for(i=s->top;i>=0;i--)
        printf("|%d|\n",s->items[i]);
}
int main()
{
   STACK s;
   s.top=-1;
   int choice=0;
   while(1)
   {
       printf("**MENU**\n");
       printf("1-PUSH\n2-POP\n3-PEEK\n4-PRINT\n");
       printf("enter your choice\n");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1: push(&s);
                   break;
           case 2: pop(&s);
                   break;
           case 3: peek(&s);
                   break;
           case 4: print(&s);
                   break;
           case 5: printf("terminating\n");
           exit(0);
       }
   }
   return 0;
}
