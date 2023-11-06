#include <stdio.h>

int main(){
	int num,loop,prime=1;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	for(loop=2;loop<num; loop++){
		if((num%loop)==0){
			prime=0;
		}
	}
	
	if(prime==1){
		printf("%d is a prime number.",num);
	}
	else{
		printf("%d is not a prime number",num);
	}
	return 0;
}
