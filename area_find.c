#include <stdio.h>
void main(){
	int i;
	for(i=1;i<=4;i++){
	   int code;
	   float side, base, length, breadth, height, area, radius;
	   printf("Find You want \n");
	   printf(" 1 --> Circle\n");
	   printf(" 2 --> Rectangle\n");
	   printf(" 3 --> Triangle\n");
	   printf(" 4 --> Square\n");
	   printf("-------------------------\n");
	   printf("Enter Upper code (only one can exist !)\n");
	   scanf("%d", &code);
	   
	   switch(code){
	      case 1:
	         printf(" Enter the radius: ");
	         scanf("%f",&radius);
	         area=3.142*radius*radius;
	         printf("Area of a circle=%f", area);
	         break;
	      case 2:
	        printf(" Enter the breadth: ");
	        scanf("%f",&breadth);
	    	printf(" Enter the length: ");
	        scanf("%f",&length);
	        area=breadth *length;
	        printf("Area of a Rectangle=%f\n", area);
	        break;
	      case 3:
	         printf(" Enter the base and height\n");
	         scanf("%f %f", &base, &height);
	         area=0.5 *base*height;
	         printf("Area of a Triangle=%f\n", area);
	         break;
	      case 4:
	         printf(" Enter the side: ");
	         printf(" Enter the length: ");
	         scanf("%f", &side);
	         area=side * side;
	         printf("Area of a Square=%f\n", area);
	         break;
	      default:
	      printf("Error in finding code\n");
	      break;
	   }
}
}
