#include<stdio.h>
#include<string.h>
int main()
{
    char parent[]="AABCABCAABAB";
    char pattern[]="AABA";
    int m=strlen(parent);
    int n=strlen(pattern);
    int j=0;
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
        printf("Pattern found at %d",i+1);
       }
    }
}