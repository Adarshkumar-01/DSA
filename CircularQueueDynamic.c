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
    enqueue(11);
    enqueue(12);
    enqueue(13);
    dequeue();
    dequeue();
    enqueue(14);
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
            printf("%d\n",queue[front]);
            front==-1;
            rear=-1;
        }
        else{
            printf("%d\n",queue[front]);
            front=(front+1)%capacity;
        }
    }
}
void display()
{
    while(front!=rear){
        printf("%d\n",queue[front]);
        front++;
        if(front==capacity){
            front=0;
        }
    }
    printf("%d\n",queue[front]);
}