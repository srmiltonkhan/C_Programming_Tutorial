#include <stdio.h>

int main(){
	int num[5] = {1,2,3,4,5};
	int sum=0;
	
	display(num,sum);
	
}

void display(int x[], int summ){
	int i;
	
	for(i=0; i<5; i++){
		summ +=x[i];
	}
	printf("the sum is: %d",summ);
}
