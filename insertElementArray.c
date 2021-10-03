#include <stdio.h>

int main(){
	int a[100]={1,2,3,4,5}, size =5, position,value, i;
	
	printf("Which position you want to?:");
	scanf("%d",&position);
	
	printf("Enter the value: ");
	scanf("%d", &value);
	
	
	
	for (i=size; i>=position; i--){
		a[i] = a[i-1]; //last index placed 5 instead of 4 index a[i] = 5 index
	}
	a[position-1]=value;
	
	for(i=0; i<=size+1; i++){
		printf("%d ", a[i]);
	}
	
	
	
	return 0;
}
