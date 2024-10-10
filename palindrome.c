#include<stdio.h>
void check_pal()
{
    int num=0,digit,revnum=0,k=0;
   // if(top==-1)
    //printf("Stack is empty");
    //return;
    while(top!=-1)
    {
        pop();
        num=num*10+item;
        revnum=item*pow(10,k)+revnum;
        k++;
    }
    printf("\nReverse number of %d is:%d",num,revnum);
    if(num==revnum)
    printf("This stack contains a palindrome.");
    else{
        printf("\nThis stack does not contains palindrome.");
    }
}