//agar queue bhar jaye nd space is available in front,we use this technique to use that spaces.
#include<stdio.h>
#define MAX 5
int queue[MAX],rear,front;
void enqueue(int n)
{
    if((rear+1)%MAX==front)
    {
        printf("overflow");
    }
    if(front==-1&&rear==-1)
       {
        front++;
        rear++;
        queue[rear]=n;
    }
    else{
        rear=(rear+1)%MAX;
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
        if(rear==front){//ekhi elt hai 2nd last space pe
        printf("%d\n",queue[front]);
        front=-1;
        rear=-1;
    }
        else{
        printf("%d\n",queue[front]);
        front=(front+1)%MAX;
    }
    }
}
void display()
{
    printf("The elements in queue is :\n");
    if(front==-1){
        printf("queu is empty");
    }
    else{
        while(front!=rear){
            printf("%d\n",queue[front]);
            front=(front+1)%MAX;
        }
        printf("%d",queue[front]);
        }
       }
   
    

    int main()
{
    rear=front=-1;
    int choice;
    int m;
    int input;
   do{ printf("Enter '1' for enqueue\nEnter '2' for dequeue\nEnter '3' for display\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
           printf("Enter m:");
           scanf("%d",&m);
           enqueue(m);
            break;
    case 2:dequeue();
           break;
    case 3:display();
           break;
    default:printf("Invalid input");
           
    }
    printf("Do you want to continue??yes(1),no(0)");
    scanf("%d",&input);
   }while(input==1);
    return 0;
}