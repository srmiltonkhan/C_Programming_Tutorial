#include <stdio.h>

int main(){
	int first, last, i,sum=0;
	
	printf("Enter First Number:");
	scanf("%d",&first);	
	
	printf("Enter Second Number:");
	scanf("%d",&last);
	
	for (i=first; i<=last; i++){
		if(i%5==0){
			sum+=i;
		}
	}	
	printf("The toal sum which are divisible by 5 :%d",sum);
}
