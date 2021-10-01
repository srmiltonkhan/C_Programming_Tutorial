#include <stdio.h>

int main(){
	int sum=0, i;
	int num[5]={5,6,8,7,9};
	
//	sum = num[0] + num[1] + num[2] + num[3] + num[4];
//	printf("Normal Array Addition method: %d\n", sum);
	
	
	
	for (i=0; i<5; i++ ){
		sum = sum + num[i];
	}
	
	printf("Sum with For loop in array: %d", sum);

}
