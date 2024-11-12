#include<stdio.h>
void towerofhanoi(int n,char A,char B,char C)
{
    if(n==1)
    {
        printf("\nMove disc 1 from %c to %c",A,C);
    }
    else{
        towerofhanoi(n-1,A,C,B);
        printf("\nMove disc %d from %c to %c", n, A, C);
        towerofhanoi(n-1,B,A,C);
}
}
int main()
{
      int n;
    printf("Adarsh's(1AY23CS008) program!!\n");
    char source='A';
    char destination='C';
    char helper='B';
    printf("Enter no. of discs:");
    scanf("%d",&n);
    towerofhanoi(n,source,helper,destination);
    return 0;
}
