#include <stdio.h>
//8305331017 kanhas papa
int arr(int n){
	int sum=0,i;
	float avg=0;
	int array[n];
	for(i=0;i<n;i++){
		printf("Enter Element: ");
		scanf("%d",&array[i]);
		sum=sum + array[i];
		avg=sum/n;
		
	}
	printf("Sum of the array is %d\n",sum);
	printf("Avrage of the array is %f\n",avg);
//	printf("%d",array[n]);
}
int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	arr(n);
}
