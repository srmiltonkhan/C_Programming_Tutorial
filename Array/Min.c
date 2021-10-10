#include <stdio.h>

int main(){
	
	int num[50], n;
	
	printf("Enter the Array size: ");
	scanf("%d",&n);
	
	int i;
	
	for (i=0; i<n; i++){
		printf("num[%d]= ",i);
		scanf("%d",&num[i]);
	}
	
	int min = num[i];
	
	for(i=0; i<n; i++){
		if(min>num[i]){
			min = num[i];
		}
	}
	
	printf("The minimum number is: %d",min);
	
	return 0;
}
