#include <stdio.h>

int main(){
	int n,mul=1,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		mul *=i; 
	}
	printf("Factorial %d",mul);
}


