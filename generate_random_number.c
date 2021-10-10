#include <stdio.h>

int main(){
	
	int i;
	
	for(i=0; i<=1; i++){
		printf("%d\n",rand()%(10+1));
	}
	
	return 0;
}
