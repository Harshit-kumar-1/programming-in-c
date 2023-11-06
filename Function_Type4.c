#include <stdio.h>
// Argument & return value.

int swep(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	return a;
}

void main(){
	printf("hello\n");
	int c=swep(5,10);
	printf("%d %d\n",c);
}
