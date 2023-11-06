
// C program to explain the use 
// of continue statement 
#include <stdio.h>
  
int main() {
    int i;   
	for (i = 11; i <= 21; i++) {  
        if (i == 15) 
            continue; 
  
        else
            // otherwise print the value of i 
            printf("%d ", i); 
    } 
  
    return 0; 
}
