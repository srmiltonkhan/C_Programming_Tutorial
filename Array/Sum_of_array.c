#include <stdio.h>

int main(){
	int num[8] = {1,5,3,4,8,6,9,5};
	
	int i, sum=0; 
	
	for(i=0; i<8; i++){
		sum = sum+num[i];	
	}
	printf("The total sum is: %d",sum);
	return 0;
}
