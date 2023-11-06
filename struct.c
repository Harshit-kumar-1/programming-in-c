#include <stdio.h>

struct student{
	int Enroll;
}s1;
int main(){
	printf("structure using program\n");
//	struct student s1;
	scanf("struct %d",&s1.Enroll);
	printf("%d",s1.Enroll);
}
