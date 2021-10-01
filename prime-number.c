#include <stdio.h>

int main(){
	int i, num, count = 0;
	
	printf("Enter positive number:");
	scanf("%d",&num);
	
	if(num>0){
			for(i=2; i<num; i++){
		if(num%i==0){
			count++;
			break;
		}
		
	}
	if(count==0){
		printf("Prime Number");
	}else{
		printf("Not prime number");
	}
	}else if(num<0){
		printf("You have entered negative number");
	}else{
		printf("You have entered zero number");
	}
	

	return 0;
}
