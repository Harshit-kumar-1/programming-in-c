#include <stdio.h>

int main(){
	//The program of arithimatic operation
//	int num1,num2,result;
//	printf("Enter the 1st number: ");
//	scanf("%d",&num1);
//	printf("Enter the 2nd number: ");
//	scanf("%d",&num2);
//	result = num1+num2;
//	printf("The sum of %d\n",result);
//	result = num1-num2;
//	printf("The sub of %d\n",result);
//	result = num1*num2;
//	printf("the multi of %d\n",result);
//	result = num1/num2;
//	printf("the divide of %d\n",result);
	//The end;
//The program of finding greatest number among two numbers.
//	int num1,num2;
//	printf("Enter the 1st Number: ");
//	scanf("%d",&num1);
//	printf("Enter the 2nd Number: ");
//	scanf("%d",&num2);
//	if(num1>num2){
//		printf("The 1st number is greater than second.");
//	}
//	else{
//		printf("The 2nd number is greater than first.");
//	}
	//The end;
//The program of for the greatest number among the three numbers.
//	int num1,num2,num3;
//		printf("Enter the 1st Number: ");
//	scanf("%d",&num1);
//	printf("Enter the 2nd Number: ");
//	scanf("%d",&num2);
//	printf("Enter the 3rd Number: ");
//	scanf("%d",&num3);
//	if(num1>num2 && num1>num3){
//		printf("The 1st number is greater than second & third.");
//	}
//	else if(num2>num1 && num2>num3){
//		printf("The 2nd number is greater than first & third.");
//	}
//	else{
//		printf("The 3rd number is greater than first & second.");
//	}
	//The end;
//The program of for finding an even or odd number;
//	int num1;
//	printf("Enter the 1st number: ");
//	scanf("%d",&num1);
//	if(num1%2==0){
//		printf("The Number is Even");
//	}
//	else{
//		printf("The Number is Odd");
//	}
	//The End;
//The program is for finding leap year.
//	int year;
//	printf("Enter the year for check leap year: ");
//	scanf("%d",&year);
//	if(year%4==0){
//		printf("This is a leap year.");
//	}
//	else{
//		printf("This is not a leap year.");
//	}
	//The end;
//The program is to swap two numbers using a third variable.
//	int num1,num2,temp=0;
//	printf("Enter the 1st Number: ");
//	scanf("%d",&num1);
//	printf("Enter the 2nd Number: ");
//	scanf("%d",&num2);
//	temp=num1;
//	num1=num2;
//	num2=temp;
//	printf("The swep values are\n");
//	printf("Number1 = %d\nNumber2 = %d",num1,num2);
	//The end;
//The program is to swap two numbers without third variable.
//	int num1,num2;
//	printf("Enter the 1st Number: ");
//	scanf("%d",&num1);
//	printf("Enter the 2nd Number: ");
//	scanf("%d",&num2);
//	num1=num1+num2;
//	num2=num1-num2;
//	num1=num1-num2;
//	printf("The swep values are\n");
//	printf("Number1 = %d\nNumber2 = %d",num1,num2);
	//The end;
//The program for printing of table which is given by the user.
//	int i,table,result;
//	printf("Enter the number of table: ");
//	scanf("%d",&table);
//	for(i=1;i<=10;i++){
//		result=table*i;
//		printf("%d * %d = %d\n",table,i,result);
//	}
	//The end;
//The program for printing of table which is given by the user.
//	int i,table,result;
//	printf("Enter the number of table: ");
//	scanf("%d",&table);
//	if(table<=0){
//		printf("Enter valid Number!");
//	}
//	else{
//		for(i=1;i<=10;i++){
//			result=table*i;
//			printf("%d * %d = %d\n",table,i,result);
//		}
//	}
	//The end;
//The program for printing of table which is given by the user.
//	int i,j,row;
//	printf("Enter the row of pyramid: ");
//	scanf("%d",&row);
//	for(i=1;i<=row;i++){
//		for(j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	//The end;
//The program for to print binary number (0, 1) in pyramid pattern.
//	int i,j,row;
//	printf("Enter the row of pyramid: ");
//	scanf("%d",&row);
//	for(i=1;i<=row;i++){
//		for(j=1;j<=i;j++){
//			if(i%2!=0){
//				if(j%2==0){
//					printf("0");
//				}
//				else{
//					printf("1");
//				}
//			}
//			else{
//				if(j%2==0){
//					printf("0");
//				}
//				else{
//					printf("1");
//				}
//			}
//		}
//		printf("\n");
//	}
	//The end;
//The program for pyramid.
//	int i,j,k,rows,sub=2;
//	printf("Enter number of rows: ");
//  	scanf("%d",&rows);
//  	
//  	for(i=1;i<=rows;i++){
//  		for(j=1;j<=rows-i;j++){
//  			printf(" ");
//		  }
//		if(i==1){
//			printf("*");
//		}
//		else{
//			for(k=1;k<=(2*i-sub);k++)
//			{
//				printf("* ");
//			}
//			sub=1+sub;
//		}
//		if(i<rows){
//		printf("\n");
//		}
//	  }
//The end;
//The program to find the largest number among two numbers using ternary operator.
////the end;
////The program to a program to check given number is prime or not.
//	int num,i;
//	printf("Enter the number: ");
//	scanf("%d",&num);
//	if(num==2 || num==1){
//		printf("Number is Prime");
//		break;
//	}
//	if(num%2==0){
//		printf("Number is Not Prime.");
//		break;
//	}
//	else{
//		for(i=3;i<(num/2);i++){
//			if(num/i==0){
//				printf("Number is Prime.");
//			}
//			else{
//				printf("Number is not prime.");
//			}
//		}
//	}
}
