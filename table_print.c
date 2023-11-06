#include <stdio.h>

int main(){
    int i,table,result;
    printf("Enter Table Number: ");
    scanf("%d",&table);
    for(i=1;i<=10;i++){
        result = i*table;
        printf("%d * %d = %d\n",table,i,result);
    }
    return 0;
}