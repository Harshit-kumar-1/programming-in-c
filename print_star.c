#include <stdio.h>

int main(){
	int row,i,space,star;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){
		
//		for(space=1;space<=row-i;space++){
//			printf(" ");
//		}
		for(star=1;star<=(2*i-1);star++){
			printf("*");
		}
		printf("\n");
	}
}
