#include <stdio.h>

int main(){
	char s1[] = "Milton Khan";
	char s2[] = "Milton Khan";
	
	int string_compare = strcmp(s1,s2);
	
	if(string_compare==0){
		printf("The string are equal");
	}else {
		printf("The string are not equal");
	}
	
	return 0;
	
	
	
}
