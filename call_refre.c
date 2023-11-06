//#include <stdio.h>
//
//int swap(int *p,int *q){
//	int temp;
//	temp=*p;
//	*p=*q;
//	*q=temp;
//	return 0;
//}
//int main(){
//	int a,b;
//	a=10;b=20;
//	printf("before swep a=%d b=%d",a,b);
//	swap(&a,&b);
//	printf("after swep a=%d b=%d",a,b);
//}
#include <stdio.h>

int swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swep a=%d b=%d",a,b);
	return 0;
}
int main(){
	int a,b;
	a=10;b=20;
	printf("before swep a=%d b=%d\n",a,b);
	swap(a,b);
}
