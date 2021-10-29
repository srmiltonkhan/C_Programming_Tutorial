#include <stdio.h>

int main(){
	
	int n1 = 20, n2 = 10;
	
	addSubMulDiv(n1, n2);

}

int addSubMulDiv(int n1, int n2){
	int add, sub, mul, div;
	
	add = n1 + n2;
	printf ("Add: %d\n", add);
	
	sub = n1 - n2;
	printf ("Add: %d\n", sub);
	
	mul = n1 * n2;
	printf ("Add: %d\n", mul);
	
	div = n1 / n2;
	printf ("Add: %d\n", div);
}
