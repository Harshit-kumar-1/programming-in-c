#include <stdio.h>

int fibo(int n);

int main(){
	int num,num1=0,num2=1;
	scanf("%d",&num);
	printf("%d %d",num1,num2);
	fibo(num-2);
	return 0;
}

int fibo(int num){
	int n1=0,n2=1,sum;
	if(num>0){
		sum=n1+n2;
		n1=n2;
		n2=sum;
		printf(" %d ",sum);
		fibo(num-1);
	}
}
