#include <stdio.h>

int main(){
	
	int n = 5;
	 int r = fact(n);
	 printf("%d",r);
	
	return 0;
}

int fact(int n){
	if(n==1){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
