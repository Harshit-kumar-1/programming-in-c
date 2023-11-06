//#include <stdio.h>
//main(){  
//   FILE *fp;  
//fp = fopen("Book1.txt", "w");
//fputc('H',fp);
//fclose(fp); 
//} 
//
//#include <stdio.h>
//main(){  
//   FILE *fp;  
//fp = fopen("Book1.txt", "a");
//fputc('K',fp);
//fclose(fp); 
//}

//Code:  
//#include <stdio.h>
//main(){  
//   FILE *fp; 
//int age;
//const char name[10];
//printf("Enter your name : ");
//scanf("%s", &name);
//printf("\nEnter your age : ");
//scanf("%d", &age);
//fp = fopen("Book1.txt", "w");
//fprintf(fp, "Welcome %s, your age is : %d", name, age); 
//fclose(fp); 
//}

#include <stdio.h>
main(){  
   FILE *fp; 
const char str[10] = "in Google";
fp = fopen("Book1.txt","a");
fprintf(fp,"\nI am Programmer- %s", str);
fclose(fp); 
}  
  
  
