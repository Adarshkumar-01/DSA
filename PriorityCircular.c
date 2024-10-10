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
        if(rear<front){
            for(int j=0;j<=(rear-1)%capacity;j++){
            if(queue[rear-j]>queue[rear-j-1]){
               int temp=queue[rear-j];
               queue[rear-j]=queue[rear-j-1];
               queue[rear-j-1]=temp;
            }
        }
       int  j=rear;
        for(int i=capacity-1;i>=0;i--)
        {
            if(queue[i]<queue[j]){
                int temp=queue[i];
                queue[i]=queue[j];
                queue[j]=temp;
                j=i;
            }
        }
    }else
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
    printf("The elements are:\n");
    while(front!=rear){
        printf("%d\n",queue[front]);
        front++;
        if(front==capacity){
            front=0;
        }
    }
    printf("%d\n",queue[front]);
}