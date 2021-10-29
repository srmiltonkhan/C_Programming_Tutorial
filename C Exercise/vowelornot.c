#include <stdio.h>

int main(){
	 char c;
	
	printf("Enter a character:");
	scanf("%c", &c);
	
	switch(c){
		case 'a':
			printf("Vowel");
			break;
		case 'A':
			printf("Vowel");
			break;
		default: 	
			printf("None of them");
		
	}
}
