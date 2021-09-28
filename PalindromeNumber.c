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
	if(num==sum){
		
		printf("%d is Palindrome Number",num);	
	}else {
		printf("%d is not Palindrome Number",num);	
	}
}
