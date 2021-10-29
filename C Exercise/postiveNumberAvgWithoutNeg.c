#include <stdio.h>

int main(){
	int n, i, store[100];
	float sum=0.0, avg;
	
	printf("How many number you want to input?:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("X= ");
		scanf("%d",&store[i]);
		if(store[i]>0){
			sum +=store[i];
		}
	}
	avg = sum/n;
	printf("The Avg is %f:",avg);
	
	
	
}
