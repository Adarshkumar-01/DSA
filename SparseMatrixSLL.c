#include<stdio.h>
#include<stdlib.h>
struct node{
    int col;
    int data;
    struct node *next;
};
struct node *temp=NULL;
Struct node *p=NULL;
int main()
{
    int row,col,data,n,r,c;
    printf("\nEnter the rows and columns in sparse matrix:");
    scanf("%d%d",&row,&col);
    struct node **arr=(struct node **)malloc(sizeof(struct node *)*row)//struct node * likha because we are only storing address of the node
    printf("\nEnter the non-zero elements in the sparse matrix:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\nEnter the row, column and data of element %d:",i);
        scanf("%d%d%d",&r,&c,&data);
        temp=(struct node *)malloc(size of(struct node));
        temp->col=c;
        temp->data=data;
        temp->next=NULL;
    }
}