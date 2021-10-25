#include <stdio.h>

int main(){
	int x = 5;
	int *p;
	
	p = &x;
	
	printf("the address of X is: %d\n", p);
	printf("the address of X is: %d\n", &x);
	printf("the value of X is: %d\n", x);
	printf("the value of X is: %d\n", *p);
	printf("the address of pointer p variable is: %d\n", &p);
	
	return  0;
}
