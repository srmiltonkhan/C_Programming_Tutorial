#include <stdio.h>

int main(){
	int x = 5, y = 6, sum = 0;
	int *ptrx, *ptry;
	
	ptrx = &x;
	
	ptry = &y;
	
	sum = *ptrx + *ptry;
	
	printf("The total sum is: %d", sum);
	
	return  0;
}
