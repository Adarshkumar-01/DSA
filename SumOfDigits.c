#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int Sum=0;
    while(num!=0)
    {
        int rem=num%10;
        Sum+=rem;
        num/=10;
    }
    printf("The sum of digits is : %d",Sum);
    return 0;
}