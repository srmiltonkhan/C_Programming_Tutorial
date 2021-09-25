#include <stdio.h>
int main(){
	int n1, n2, i, sum = 0;
	
	printf("Enter the First Number :");
	scanf("%d",&n1);
	
	printf("Enter the Last Number :");
	scanf("%d",&n2);
	
	for(i=n1; i<=n2; i++){
	  if(i%2==0){
	  	printf("Even Number: %d\n",i);
	  	sum = sum +i;
	  }
	}
	printf("The total consecutive sum is: %d", sum);
	return 0;
}
