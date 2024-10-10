#include<stdio.h>
#include<string.h>
int main()
{
    printf("Adarsh's(1AY23CS008) program!\n");
    char parent[]="AABCABCAABAB";
    char pattern[]="AABA";
    char new[]="ADAR";
    int m=strlen(parent);
    int n=strlen(pattern);
    int j=0,k=0;
    for(int i=0;i<m-n;i++)
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
            parent[i+j]=new[j];
        }
       }
    
    }
    printf(parent);
    return 0;
}