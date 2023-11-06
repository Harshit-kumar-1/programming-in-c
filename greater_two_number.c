#include <stdio.h>

int main(){
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter second Number: ");
    scanf("%d",&b);
    if(a>b){
        printf("%d is the greater than %d",a,b);
    }
    else{
        printf("%d is the Greater than %d",b,a);
    }
}