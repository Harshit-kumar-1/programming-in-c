#include <stdio.h>

int main(){
	printf("This Program is Genrated Fibonaccies series.\n");
	int num,num1,num2,num3,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	num1=0;
	num2=1;
	printf("%d\n%d\n%d\n",num1,num2,num2);
	for(i=1;i<=num;i++){
		num1=num2;
		num2=num3;
		num3=num1+num2;
		printf("%d\n",num3);
	}
}
