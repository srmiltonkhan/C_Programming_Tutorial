#include <stdio.h>

int main(){
	int num, first, second, fibo, count=0;
	
	printf("Enter Any Range Number: ");
	scanf("%d", &num);
	
	while(count<num){
		if(count<=1){
			fibo = count;
		}else{
			fibo  = first + second;
			first = second;
			second = fibo;
		}
		printf("%d ",fibo);
		count++;
	}
}
