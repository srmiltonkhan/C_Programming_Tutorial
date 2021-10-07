#include <stdio.h>

int main(){
	
	char str[1000];
	printf("Enter any string for changing upper case: ");
	gets(str);
	
	printf("%s",strupr(str));
	
}
