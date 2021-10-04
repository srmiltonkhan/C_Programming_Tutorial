#include <stdio.h>

int main(){
	
	char name[] = "Milton Khan";
	int i, count=0;
	for(i=0; name[i]!='\0'; i++){
		count++;
	}
	
	printf("Total Length: %d",count);
	
	
	printf("\nString length count by strlen() function\n");
	
	
	char s[]="The Quick Brown Fox Jumps Over The Lazy dog.";
	
	int string_len = strlen(s);
	printf("Total length is : %d ",string_len);
}



