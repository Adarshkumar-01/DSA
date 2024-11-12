#include<stdio.h>
#include<string.h>
int main()
{
   // printf("Adarsh's(1AY23CS008) program!\n");
    char parent[]="TANISHKA";
    char pattern[]="KA";
    char replace[]="KO";  
    int m=strlen(parent);
    int n=strlen(pattern);
    int j=0;
    for(int i=0;i<=m-n;i++)
    {
       for(j=0;j<n;j++)
       {
        if(parent[i+j]!=pattern[j])
        {
            break;
        }
       }
       if(j==n)
       {
        printf("Pattern found at %d\n",i+1);
        for(int j=0;j<n;j++)
        {
            parent[i+j]=replace[j];
        }
       }
    
    }
    printf("%s",parent);
    return 0;
}