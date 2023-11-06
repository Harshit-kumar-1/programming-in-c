#include<stdio.h>

int main(){
	int i,num1=0,num2=1,num3,fibo;
	printf("Enter number for fabonies series: ");
	scanf("%d",&fibo);
	
	printf("fabonies series:-\n");
	printf("\t%d \n \t%d\n",num1,num2);
	
	for(i=2;i<=fibo-1;i++){
		num3 = num1 + num2;
		printf("\t%d\n",num3);
		num1= num2;
		num2 = num3;
	}	
	return 0;
}
