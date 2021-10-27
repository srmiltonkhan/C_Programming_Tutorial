#include <stdio.h>

int main(){
	
	char c = getchar();
	
	switch(c){
		case 'A':
			printf("A");
			break;
		
		case 'B':
			printf("B");
			break;
		
		default:
			printf("None of them");
	}
	
	
	return 0;
}
