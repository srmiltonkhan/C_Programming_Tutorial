#include <stdio.h>
int main(){
	int num1, num2, n1,n2,rem,gcd,lcm;
	
	printf("Enter two value: ");
	scanf("%d %d",&num1, &num2);
	
	n1 = num1;
	n2 = num2;
	
//	printf("%d",n1);
//	printf("%d",n2);
	
	while(n2!=0){
		rem = n1%n2;
		n1 = n2;
		n2 = rem;
	}


	gcd = n1;
	lcm = (num1*num1)/gcd;
	
	printf("GCD =%d\n",gcd);
	printf("LCD =%d",lcm);
	
	return 0;
}
