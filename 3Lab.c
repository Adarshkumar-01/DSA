#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5
int stack[MAX],top=-1,item;

int IsFull()
{
    if(top>=MAX-1)
     return 1;
     return 0;
}
int IsEmpty()
{
    if(top==-1)
    return 1;
    return 0;
}
void push(int item)
{
    top++;
    stack[top]=item;
}
int pop()
{
    item=stack[top];
    top--;
    return item;
}
void display()
{
    int i;
    printf("The elements of stack is:\n");
    for(i=0;i<=top;i++)
    
        printf("\n%d",stack[i]);    
}
void check_pal() {
    int num=0,revnum=0,k=0;
    if(top==-1)
    {
        printf("The stack is empty\n");
    }
    while(top!=-1)
    {
        pop();
        num=num*10+item;
        revnum=item*pow(10,k)+revnum;
        k=k+1;
    } 

    if(num==revnum) {
        printf("This stack contains a palindrome.");
    } else {
        printf("This stack does not contain a palindrome.");
    }
}

void main()
{
    printf("Adarsh's(1AY23CS008) program!");
    int ch;
    do
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Checkpalindrome\n5.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1 :printf("\nEnter the no to be inserted:\n");
                scanf("%d",&item);
                if(IsFull())
                printf("\nStack is full");
                else
                {
                    push(item);
                }
                break;
        case 2:if(IsEmpty())
                printf("\nStack is empty");
                else
                {
                 printf("%d",pop());
                }
                break;
        case 3:if(IsEmpty())
               printf("\nStack is empty");
               else
               {
                display();
               }
               break;
        case 4:check_pal();
               break;
        case 5:printf("\nProgram terminated.");
               exit(0);
        default:printf("\nInvalid choice\n");
            
        }
    } while (1);
    
}