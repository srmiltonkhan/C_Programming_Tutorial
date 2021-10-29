#include <stdio.h>

int main(){
	int n1 = 10;
	int n2 = 20;
	int temp;
	
	temp = n1;
	n1	= n2;
	n2 = temp;
	
	printf("N1= %d",n1);
	printf("N2= %d",n2);
}
