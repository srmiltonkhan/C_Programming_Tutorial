#include <stdio.h>
int odd_even(int n);

int main(){	
	int n;
	printf("Enter an number:");
	scanf("%d",&n);
	int r= odd_even(n);
	printf("%d",r);
}

int odd_even(int n){
	if(n%2==0){
		printf("Even");
	}else {
		printf("ODD");
	}
}

