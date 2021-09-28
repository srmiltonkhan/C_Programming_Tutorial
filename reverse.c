#include <stdio.h>

int main(){
	int num,reminder, temp,sum=0;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	temp = num;
	
	while(temp!=0){
		reminder = temp%10;
		sum = sum*10+reminder;
		temp = temp/10;
	}
	printf("Reverse number: %d",sum);
}
