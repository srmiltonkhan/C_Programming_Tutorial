#include <stdio.h>

int main(){
	
	int num[5] = {12,20,30,40,50};
	
	int *p;
	
	p = num;
	
	int i;
	
	for(i=0; i<5; i++){
		printf("%d\n",*(p+i));
	}
	printf("array values shows by num\n");
	for(i=0; i<5; i++){
		printf("%d\n",*(num+i));
	}
	
	return 0;
}
