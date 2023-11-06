#include <stdio.h>
#include <stdio.h>

void sum(){
	int num1,num2;
	printf("Enter 1st Number: ");
	scanf("%d",&num1);
	printf("Enter 2st Number: ");
	scanf("%d",&num2);
	printf("Sum = %d",num1+num2);
}

void main(){
	printf("Code is working\n");
	sum();
	getch();
}
