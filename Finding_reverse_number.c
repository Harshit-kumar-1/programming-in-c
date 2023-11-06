//Write a program for finding reverse number which is given by the user?
#include <stdio.h>

int main(){
	char s,i,*prt,sum=0;
	printf("Enter the number: ");
	scanf("%c",&s);
	ptr = (char * )calloc(n * sizeof(char));
	if(prt==NULL){
		printf("Unable to allocate memory");
		exit();
	}
	printf("%c",n);
	
	for(i=0;i<n;i++){
		scanf("%c",&prt+i);
		sum+=(prt+i);
	}
	printf("%c",sum);
	free(prt);
}
