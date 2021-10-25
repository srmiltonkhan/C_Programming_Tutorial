#include <stdio.h>

int main(){
	int x = 5, y = 6;
	int *pointer;
	
	pointer = &x;
	printf("the address of X is: %d\n", pointer);
	printf("the value of X is: %d\n", *pointer);
	
	pointer = &y;
	printf("the address of X is: %d\n", pointer);
	printf("the value of X is: %d\n", *pointer);

	
	return  0;
}
