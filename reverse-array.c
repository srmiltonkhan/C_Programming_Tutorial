#include <stdio.h>

int main(){
	int num[100],i,size;
	
	printf("Enter the array size:");
	scanf("%d",&size);
	

	for(i=0; i<size; i++){
		printf("Array element %d: ",i+1);
		scanf("%d",&num[i]);
	}
	for (i=size-1; i>=0; i--){
		printf("%d",num[i]);
	}
	
	return 0;
}
