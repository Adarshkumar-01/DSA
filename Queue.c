#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int *queue,front,rear;


void enqueue(int n){
        if(rear>=MAX-1)
          {
            printf("overflow");
          }
        if(front==-1 && rear==-1)
        {
            front++;
            rear++;
            queue[rear]=n;
        }
        else{
            rear++;
            queue[rear]=n;
        }
    }
    void dequeue()
    {
        if(rear==-1&&front==-1)
        {
            printf("underflow");
        }
        else{
            printf("%d\t",queue[front]);
            front++;
            if(front>rear)
            {
                front=-1;
                rear=-1;
            }
        }
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
            printf("\t");
        }
    }

int main()
{
    queue = (int*)malloc(MAX * sizeof(int));
if (queue == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
}
    rear=-1;
    front=-1;
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    dequeue();
    display();
    return 0;
    }
   