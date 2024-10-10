#include<stdio.h>
#include<stdlib.h>
int *queue;
int capacity,front,rear;
int main()
{
    printf("Enter the size:");
    scanf("%d",&capacity);
    queue=(int *)malloc(capacity*sizeof(int));
    if(queue==NULL){
        printf("Memory is not allocated");
    }
    front=-1;
    rear=-1;
    enqueue(10);
    enqueue(10);
    enqueue(15);
    enqueue(16);
    dequeue();
    dequeue();
    enqueue(11);
    display();
}
void enqueue(int n)
{
    if(front==(rear+1)%capacity)
    {
        printf("queue overflow");
    }
    else{
        if(front==-1)
        {
            front++;
            rear++;
            queue[rear]=n;
        }
        else{
            rear=(rear+1)%capacity;
            queue[rear]=n;
        }
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("\nqueue underflow");
    }
    else{
        if(front==rear)                 //ek hi element hai
        {
            printf("%d",queue[front]);
            front==-1;
            rear=-1;
        }
        else{
            printf("%d",queue[front]);
            front=(front+1)%capacity;
        }
    }
}
void display()
{
    if(front==-1)
    {
        printf("Empty");

    }
    else{
        if(front<rear)
        { for(int i=front;i<rear;i++)
       
            printf("%d\n",queue[front]);
        }else{
            for(int i=0;i<=rear;i++)
               printf("%d\n",queue[front]);
        }