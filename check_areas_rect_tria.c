#include <stdio.h>
#define true 1
//Circle(A=pr2) 2. Triangle(A=hb/2) 3. Rectangle(A=wl) 4. Square(A=a*a) using switch case statement?
int main(){
	int check,r,A,h,b,w,l,a;
	printf("This program for checking Areas\n1 press for Circle\n2 press for Triangle.\n");
	printf("3 press for Rectangle.\n4 press for Square.\n");
	while (1){
		printf("\nEnter the Number you want to check Areas: ");
		scanf("%d",&check);
		switch(check){
			case 1:
				
				printf("Enter the Radius of circle: ");
				scanf("%d",&r);
				A=22*r*r/7;
				printf("The Area of circle is %d\n",A);
				break;
			
			case 2:
				
				printf("Enter the height of triangle: ");
				scanf("%d",&h);
				printf("Enter the Base of triangle: ");
				scanf("%d",&b);
				A=h*b/2;
				printf("The Area of triangle is %d\n",A);
				break;
				
			case 3:
				
				printf("Enter the length of rectangle: ");
				scanf("%d",&w);
				printf("Enter the width of rectangle: ");
				scanf("%d",&l);
				A=w*l/2;
				printf("The Area of rectangle is %d\n",A);
				break;
				
			case 4:
				printf("Enter the side of square: ");
				scanf("%d",&a);
				A=a*a;
				printf("The Area of square is %d\n",A);
				break;
			default:
				printf("You Enter Invalied Number.Try again");
				break;
		}
	}
}
