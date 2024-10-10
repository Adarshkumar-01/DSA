#include<stdio.h>
int max=10;
int stack[10];
int top=-1;
int main()
{
    push();
    push();
    push();
    pop();
    pop();
    push();
    printf("%d",top);
    return 0;
}
void push()
{
    top++;
    if(top>=max){
        printf("stack overflow!!!");
    }
    else{
        printf("enter data");
        scanf("%d",&stack[top]);
    }
}
void pop()
{
    if(top<=-1){
        printf("stack underflow");
    }
    else{
        printf("%d\n",stack[top]);
        top--;
    }
}   