#include <stdio.h>
#include <conio.h>

void reapet(){
	printf("This is my daily ruten\n");
	void awake(){
		printf("I am Awake 8AM in the Morning\n");
	}
	void eat(){
		printf("I am eat food like a hungry man\n");
	}
	void sleep(){
		printf("I am sleep 2AM in the next day\n\n\n");
//		reapet();
	}
	
	awake();
	eat();
	sleep();
}
void main(){
	int i =1;
	for(i=1;i<=6;i++){
		reapet();
	}
	
}
