//write a program to swap two numbers  without using a third variable to function?
#include <stdio.h>

int main(){
	int num1,num2,swap;
	printf("Enter number 1: ");//5
	scanf("%d",&num1);
	printf("Enter number 2: ");//10
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1= num1-num2;
	printf("num1 = %d\n",num1);
	printf("num2 = %d",num2);
}
