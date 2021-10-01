#include <stdio.h>

int main(){
	
	
	int num[6] = {52,60,75,80,90,10};
    int  min, i;
	
	min = num[0];
 	
	for(i=0; i<=6; i++){
		if(min>num[i]){
			min = num[i];
		}
	}
	
	printf("The highest number is: %d", min);

	return 0;
}
