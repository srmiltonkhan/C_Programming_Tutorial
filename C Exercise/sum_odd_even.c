#include <stdio.h>

int main(){
	int first , last, i, sum_even=0, sum_odd=0, store;
	
	printf("Enter First Number:");
	scanf("%d",&first);
	
	printf("Enter last Number:");
	scanf("%d",&last);
	
	for (i = first; i<=last; i++){
		if(i%2==0){
			sum_even +=i;
		}else{
			sum_odd +=i;
		}
		
	}
	printf("The sum event is:%d\n",sum_even);
	printf("The sum odd is:%d\n",sum_odd);
}
