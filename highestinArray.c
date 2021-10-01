#include <stdio.h>

int main(){
	int num[100], n, i, max;
	
	printf("Enter any number that you want to input: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("%d Index = ",i);
		scanf("%d",&num[i]);
	}
	
	max = num[0];
	 
	for(i=1; i<=n; i++){
		if(max<num[i]){
			max = num[i];
			
		}
	}
	printf("Maximum value is %d: ", max);
	
	return 0;
}
