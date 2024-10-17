#include<stdio.h>
#include<math.h>
#define max 10
int stack[max];
int top=-1;
void push(int val)
{
    if(top>=max-1)
    {
        printf("Stack overflow!!");
    }
    else
    {
        top++;
        stack[top]=val;
    }
}
int pop()
{
    if(top<=-1)
    {
        printf("Stack underflow!!");
        return -1;
    }
    else
    {
        int x;
        x=stack[top];
        top--;
        return x;
    }    
}
int main()
{   
    printf("Adarsh's(1AY23CS008) program!!\n");
    char exp[10];
    printf("Enter the postfix expression:");
    scanf("%s",exp);
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^'||exp[i]=='%')
        {
            int a=pop();
            int b=pop();
            switch(exp[i])
            {
              case '+':push(b+a);
                       break;
              case '-':push(b-a);
                       break;
              case '*':push(b*a);
                       break;
              case '/':push(b/a);
                       break;
              case '%':push(b%a);
                       break;
              case '^':push(pow(b,a));
                       break;
            }   
        }
        else
        {
            push(exp[i]-'0');
        }
    }
    printf("The result is:%d",stack[top]);
    return 0;
}