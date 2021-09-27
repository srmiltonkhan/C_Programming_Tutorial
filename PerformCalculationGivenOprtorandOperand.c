#include <stdio.h>

int main(){
	float num1, num2, result;
	char operator_char;

	printf("Enter Operator which you want?: ");
	scanf("%c",&operator_char);	
	
	printf("Enter First Number: ");
	scanf("%f",&num1);
	
	printf("Enter Second Number: ");
	scanf("%f",&num2);	
	
	switch(operator_char){
		case '+':
			result = num1+num2;
			printf("The Sum of Two Numbers is: %.2f",result);
			break;
		case '-':
			result = num1-num2;
			printf("The Subtraction of Two Numbers is: %.2f",result);	
			break;
		case '*':
			result = num1*num2;
			printf("The Multiplication of Two Numbers is: %.2f",result);	
			break;	
		case '/':
			result = num1/num2;
			printf("The Division of Two Numbers is: %.2f",result);	
			break;	
		Default:
			printf("Invalid Entered Operator");
			break;						
	}

}
