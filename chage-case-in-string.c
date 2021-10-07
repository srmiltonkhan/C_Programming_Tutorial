#include <stdio.h>
int main(){
	char str[1000];
	printf("Enter any string for changing upper case: ");
	gets(str);
	
	int i = 0;
	
	while(str[i] !='\n'){
		if(str[i] >='a' && str[i] <= 'z'){
			str[i] = str[i]-32;
		}
		i++;
	}
	printf("%s",str);
	
	
}
