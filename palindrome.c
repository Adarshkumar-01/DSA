#include<stdio.h>
int checkPal(int num)
{
    int original,rev=0,rem;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return original==rev;
}
int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    if(checkPal(number))
    {
        printf("The given no %d is a palindrome.\n",number);
    }
    else{
        printf("The given number %d is not a palindrome.\n",number);
    }
    return 0;
}