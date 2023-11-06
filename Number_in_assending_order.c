////#include <stdio.h>
////
////int main(){
////	int num,i,temp;
////	printf("1,2,3 is a prime Number you want to check prime\n");
////	printf("Enter the Number: ");
////	scanf("%d",&num);
////	
////	if(num>0){
////		for(i=2;i<=num/2;i++){
////			temp=1;
////			if(num%i==0){
////				printf("Number is not prime.");
////				break;
////			}
////			else{
////				temp=0;
////				continue;
////			}
////		}
////		if(temp==0){
////		printf("Number is a prime");
////		}
////	}
////}
//#include <stdio.h>
//int main() {
//   int i,num,flag = 0;
//   printf("enter number: ");
//   scanf("%d",&num);
//   for(i=2 ; i < num/2 ; i++) {
//      if(num%i == 0) {
//         printf("%d is not a prime number", num);
//         flag = 1;
//         break;
//      }
//   }
//   if(flag == 0) {
//      printf("%d is a prime number", num);
//   }
//}
 /*
     * C program to accept N numbers and arrange them in an ascending order
     */
 
    #include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
