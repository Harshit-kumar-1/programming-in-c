#include<stdio.h>
 
int main() {
   int i, j,rows;
   int count = 1;
   printf("Enter the Number of rows: ");
   scanf("%d",&rows);
   
   for (i = 1; i <= rows; i++) {
      printf("\n");
      for (j = 1; j <= i; j++) {
         printf("%d", count % 2);
         count++;
      }
 
      if (i % 2 == 0)
         count = 1;
      else
         count = 0;
   }
   return(0);
}
