#include <stdio.h>
#include <stdlib.h>
struct node
{
    int salary;
    int SSN;
    char name[30];
    int phone;
    char desig[20];
    char dept[10];
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *newnode, *temp, *tail = NULL;
int count = 0;
void create()
{       
        int n;
        printf("Enter the number of employees:");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
        printf("Creating database for %d Employee",i);
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter the name:");
        scanf("%s", &newnode->name);
        printf("\nEnter the salary:");
        scanf("%d", &newnode->salary);
        printf("\nEnter the department:");
        scanf("%s", &newnode->dept);
        printf("\nEnter the designation:");
        scanf("%s", &newnode->desig);
        printf("\nEnter the SSN:");
        scanf("%d", &newnode->SSN);
        printf("Enter phone number:");
        scanf("%d",&newnode->phone);
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("******************************************\n");
        if (head == NULL)//This  is the first node we are creating.
        {
            head = tail = newnode;
            count++;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
            count++;
        }
        }
}
void display()
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
    }
    temp = head;
    while (temp != 0)
    {
        printf("*************************************\n");
        printf("The Employee details are:\n");
        printf("\nThe SSN number is :%d\n", temp->SSN);
        printf("The name of employee is:%s\n",temp->name);
        printf("The salary  of employee is :%d",temp->salary);
        printf("Ths department of employee is:%s\n",temp->dept);
        printf("The designation of employee is :%s\n",temp->desig);
        printf("The phone number of employee is:%d\n",temp->phone);
        count++;
        temp = temp->next;
    }
    printf("The no. of nodes are:%d\n", count);
}
void add_at_beg()
{
    printf("***********************************\n");
    printf("Adding new node at beginning\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the name:");
    scanf("%s", &newnode->name);
    printf("\nEnter the salary:");
    scanf("%d", &newnode->salary);
    printf("\nEnter the department:");
    scanf("%s", &newnode->dept);
    printf("\nEnter the designation:");
    scanf("%s", &newnode->desig);
    printf("\nEnter the SSN:");
    scanf("%d", &newnode->SSN);
    printf("Enter phone number:");
    scanf("%d",&newnode->phone);
    newnode->next = newnode->prev = NULL;
    if (head == NULL)
    {
        head = tail = newnode;
        count++;
        return;
    }
    else
    {
        newnode->next = head;
        head = newnode;
        count++;
    }
}
void add_at_end()
{
    printf("***********************************\n");
    printf("Adding new node at end\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the name:");
    scanf("%s", &newnode->name);
    printf("\nEnter the salary:");
    scanf("%d", &newnode->salary);
    printf("\nEnter the department:");
    scanf("%s", &newnode->dept);
    printf("\nEnter the designation:");
    scanf("%s", &newnode->desig);
    printf("\nEnter the SSN:");
    scanf("%d", &newnode->SSN);
    printf("Enter phone number:");
    scanf("%d",&newnode->phone);
    newnode->next = newnode->prev = NULL;
    count++;
    if (head == NULL)
    {
        printf("Linked list is empty\n");
        //Adding the node in beginning when list is empty.
        head=tail=newnode;
        return;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;//tail->next=newnode;
        newnode->prev = temp;//newnode->prev=tail;
        tail = newnode;
    }
}
void delAtBeg()
{
    printf("***********************************\n");
    printf("Deleting a node from  the beginning\n");

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    else
    {
        temp = head;
        if(head==tail)
        {
            head=tail=NULL;//only one node is there
        }
        else
        {
        head = head->next;
        free(temp);
        }
        count--;
    }
}
void delFromEnd()
{
    printf("***********************************\n");
    printf("Deleting a node from  the End\n");
    temp = tail;
    if (head == NULL)
        printf("List is empty\n");
    else
    {
        if (head == tail)//only one node
            head = tail = NULL;
        else
        {
            tail->prev->next = NULL;
            tail = tail->prev;
        }
        free(temp);
        count--;
    }
}


int main()
{
    int choice;
    while(1)
    {
        printf("**************************************\n");
        printf("Enter 1 for creating Doubly Linked List\n");
        printf("Enter 2 for displaying the status\n");
        printf("Enter 3 for adding at beginning\n");
        printf("Enter 4 for addition at end\n");
        printf("Enter 5 for deleting at beginning\n");
        printf("Enter 6 for deletion at end\n");
        printf("Enter 7  for exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:add_at_beg();
                   break;
            case 4:add_at_end();
                   break;
            case 5:delAtBeg();
                   break;
            case 6:delFromEnd();
                   break;
            case 7:exit(0);
            default:printf("Invalid choice\n");
        }
    }
    return 0;
}


