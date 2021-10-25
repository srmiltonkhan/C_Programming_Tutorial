#include <stdio.h>

int main(){
	
	int num[5] = {10,20,30,40,50};
	
	int *ptr;
	int i;
	
	ptr = &num[0];
	
//	printf("The first index value is: %d", *ptr);	


	for(i=0; i<5; i++){
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}
