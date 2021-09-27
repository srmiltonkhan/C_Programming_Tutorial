#include <stdio.h>

int main(){
	int num1, num2,i,count=0;
	float sum = 0;
	
	printf("Enter First Number: ");
	scanf("%d",&num1);
	
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	
	for (i=num1; i<=num2; i++){
		
		if(i%2==0){
			sum = sum + i;
			count ++;	
		}
		
	}
	printf("The Total Positive Number is: %d\n",count);
	printf("Positive Number total value is: %.2f\n",sum);
	printf("The average of Positive number is: %.2f\n",sum/count);
}
