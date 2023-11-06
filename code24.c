#include <stdio.h>
//8305331017 kanhas papa
int arr(int n){
	int sum=0,i,j;
	float avg=0;
	int array[n];
	for(i=0;i<n;i++){
		printf("Enter Element: ");
		scanf("%d",&array[i]);		
	}
	for(i=0;i<n+1;i++){
		for(j=1;j<n-1;j++){
			if(array[i]>array[j]){
			printf("%d less %d\n",array[j],array[i]);
		}
		else{
			printf("%d greater %d\n",array[i],array[j]);
			break;
		}
		}
	}
//	printf("Sum of the array is %d\n",sum);
//	printf("Avrage of the array is %f\n",avg);
//	printf("%d",array[n]);
}
int main(){
	int n;
	printf("Enter the number of array: ");
	scanf("%d",&n);
	arr(n);
}
