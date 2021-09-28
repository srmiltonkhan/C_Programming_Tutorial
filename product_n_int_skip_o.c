#include <stdio.h>

int main(){
	int number,i,product;
	
	printf("Enter numbers:");
	scanf("%d",&number);
	
	if (number==0){
	
		printf("Please Input value greater than 0.\n");
		return 0;
	}	
	for (i=1; i<=number; i++){
		product = product * i;
	}
	
	printf("The total product is: %d", product);
}
