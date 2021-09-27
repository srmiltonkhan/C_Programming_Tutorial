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
	
	if(operator_char == '+'){
		result = num1 + num2;
		printf("The Addition is %.2f",result);
	}else if(operator_char == '-'){
		result = num1 - num2;
		printf("The Addition is %.2f",result);	
	}else if(operator_char == '*'){
		result = num1 * num2;
		printf("The Addition is %.2f",result);			
	}else if(operator_char == '/'){
		result = num1 / num2;
		printf("The Addition is %.2f",result);			
	}else{
			printf("Entered Operator is envalid");
	}

}
