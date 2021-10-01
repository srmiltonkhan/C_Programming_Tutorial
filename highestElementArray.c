#include <stdio.h>

int main(){
	
	int num[6] = {52,60,75,80,90,10};
	int max;
	int i;
	
	max = num[0];
 	
	for(i=0; i<=6; i++){
		if(max<num[i]){
			max = num[i];
		}
	}
	
	printf("The highest number is: %d", max);

	return 0;
}
