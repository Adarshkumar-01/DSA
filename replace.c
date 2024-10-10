#include<stdio.h>
#include<string.h>
int main(){
	char *string="AAABCABBACAACAABCAABB";
	char *pattern="AABCA";
    char *replace = "CCABC";
	int m,n,o,i,j;
	m=strlen(string);
	n=strlen(pattern);
    o = strlen(replace);
	for(i=0;i<m-n;i++){
		for(j=0;j<n;j++){
			if(string[i+j]!=pattern[j]){
				break;
			}
		}
		if(j==n){
			printf("\nPattern Found at location %d ",i+1);
		}
        for(j=0;j<n;j++){
            string[i+j] = replace[j];
        }
        printf("\nString replaced");
        break;
	}
    printf("The replaced string is: %s", string);
	return 0;
}