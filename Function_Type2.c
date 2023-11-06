#include <stdio.h>
// Argument Without return value.

void swep(int a,int b){
	printf("%d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}

void main(){
	printf("hello\n");
	swep(20,10);
}
