//agar queue bhar jaye nd space is available in front,we use this technique to use that spaces.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
char queue[MAX];
int rear,front;
void enqueue(char n)
{
    if((rear+1)%MAX==front)
    {
        printf("overflow\n");
        //clear the buffer input
       // int c;
        //while((c=getchar())!='\n'&&c!=EOF);
        return;
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
        printf("underflow\n");
        return;
    }
    else{
        if(rear==front){//ek hi elt hai
        printf("%c\n",queue[front]);
        front=-1;//reinitialising our queue
        rear=-1;
    }
        else{
        printf("%c\n",queue[front]);
        front=(front+1)%MAX;
    }
    }
}
void display()
{
    printf("The elements in queue is :\n");
    if(front==-1){
        printf("queue is empty");
        return;
    }
    else{
        int temp=front;

        while(temp!=rear){
            printf("%c\n",queue[temp]);
            temp=(temp+1)%MAX;
        }
        printf("%c\n",queue[temp]);//to print element at rear(last) position
        }
 }
 int main()
{
    printf("Adarsh's(1AY23CS008) program!!\n");
    rear=front=-1;
    int choice;
    char m;
    while(1)
    {
    printf("Enter '1' for enqueue\nEnter '2' for dequeue\nEnter '3' for display\nEnter '4' for exit\nEnter choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
           printf("Enter m:");
           scanf(" %c",&m);
           enqueue(m);
            break;
    case 2:dequeue();
           break;
    case 3:display();
           break;
    case 4:exit(0);
    default:printf("Invalid input\n");
           
    }
 }
       return 0;
}