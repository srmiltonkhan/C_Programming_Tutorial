#include <stdio.h>

int main(){
	

	
	switch(toupper(getchar())){
		case 'A':
			printf("You have input A");
			break;
		
		case 'B':
			printf("You have input B");
			break;
		
		default:
			printf("None of them");
	}
	
	
	return 0;
}
