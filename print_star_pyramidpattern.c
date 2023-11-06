//The program for pyramid.
int main(){
	
int i,j,k,rows,sub=1;
printf("Enter number of rows: ");
scanf("%d",&rows);
  	
for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
  			printf(" ");
		  }
//		if(i==1){
//			printf("* ";)
//		}
		for(k=1;k<=(2*i-sub);k++)
		{	
			printf("* ");
//			sub=1+sub;
		}
	sub=1+sub;
	if(i<rows){
		printf("\n");
	}
}
}
