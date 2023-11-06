#include <stdio.h>
// No Argument but return value.

int swep(){
	int a=5;
	int b=7;
	a=a+b;
	b=a-b;
	a=a-b;
	return a;
}

void main(){
	printf("hello\n");
	int c=swep();
	printf("%d %d\n",c);
}
