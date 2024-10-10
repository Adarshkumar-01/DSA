#include<stdio.h>
void main()
{
    int i,j,count=0,rows,cols,arr[10][10];
    printf("Enter rows and columns:");
    scanf("%d%d",&rows,&cols);
    printf("Enter elements:");
 
    for(i=0;i<rows;i++){
    
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(arr[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>=((rows*cols)/2))
    {
        printf("It is sparse matrix.");
    }
    else{
        printf("it is not sparse matrix.");
    }
 
}