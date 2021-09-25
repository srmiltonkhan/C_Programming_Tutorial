#include <stdio.h>
int main(){
	int n1, n2, i, even_sum = 0,odd_sum = 0;
	
	printf("Enter the First Number :");
	scanf("%d",&n1);
	
	printf("Enter the Last Number :");
	scanf("%d",&n2);
	
	for(i=n1; i<=n2; i++){
	  if(i%2==0){
	  	printf("Even Number: %d\n",i);
	  	 even_sum = even_sum +i;
	  }else{
	  	printf("Odd Number: %d\n",i);
	  	odd_sum = odd_sum +i;
	  }
	}
	printf("The total consecutive even number sum is: %d\n", even_sum);
	printf("The total consecutive odd number sum is: %d\n", odd_sum);
	printf("The total sum is: %d\n", even_sum+odd_sum);
	return 0;
}
