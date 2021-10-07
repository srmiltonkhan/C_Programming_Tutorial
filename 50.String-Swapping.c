#include <stdio.h>

int main(){
	
	char s1[20] = "Bangladesh";
	char s2[15] = "India";
	char temp[15];
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
	
	printf("First String after swapping: %s \n",s1);
	printf("Second String after swapping: %s \n",s2);
}
