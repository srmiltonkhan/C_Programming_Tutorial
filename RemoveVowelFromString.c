
#include <stdio.h>
#include <string.h>

int main(){
	char str1[25], str2[25];
	int i,j=0;
	
	printf("Enter any String: ");
	gets(str1);
	
	int str_length = strlen(str1);
	

	
	
	for(i=0; i<=str_length; i++){
		
		if(str1[i]=='a' ||str1[i]=='e' ||str1[i]=='i' ||str1[i]=='o' ||str1[i]=='u' ||
		str1[i]=='A' ||str1[i]=='E' ||str1[i]=='I' ||str1[i]=='O' ||str1[i]=='U'){
			str1[i]=' ';
		}else{
			str2[j++]=str1[i];
		}
	}
	str2[j]='\0';
	printf("After deleting vowel is: %s",str2);
}
