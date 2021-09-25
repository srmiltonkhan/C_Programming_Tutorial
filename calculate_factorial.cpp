#include <stdio.h>

int main(){
    int n;
	printf("Please Enter a Number: ");
	scanf("%d",&n);
	int result = fact(n);
	printf("The factorial is %d",result);
	return 0;
}
int fact(int n){
	if(n==1){
		return 1;
	}else{
		return n * fact(n-1);
	}
}
