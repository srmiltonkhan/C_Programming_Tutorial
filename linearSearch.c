#include <stdio.h>

int main(){
	//Linear Search
	
	int num[] = {10,20,30,40,50};
	int value, i, position=-1;
	
	printf("Enter value for searching: ");
	scanf("%d",&value);
	
	for (i=0; i<6; i++){
		if(value == num[i]){
			position = i+1;
			break;
		}
	}
	
	if(position ==-1){
		printf("Not Found");
	}else{
		printf("The value has found at %d",position);
	}
	
 }
