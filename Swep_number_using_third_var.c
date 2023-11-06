//write a program to swap two numbers using a third variable to function?
#include <stdio.h>

int main(){
	int num1,num2,swap;
	printf("Enter number 1: ");
	scanf("%d",&num1);
	printf("Enter number 2: ");
	scanf("%d",&num2);
	swap=num1;
	num1=num2;
	num2=swap;
	printf("num1 = %d\n",num1);
	printf("num2 = %d",num2);
}
