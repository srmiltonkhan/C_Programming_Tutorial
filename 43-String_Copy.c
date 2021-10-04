#include <stdio.h>

int main(){
	
	char str[] = "Bismillahir Rahmanir Rahim";
	
	char container[50];
	
	strcpy(container,str);
	
	printf("The First String : %s\n", str);
	printf("The Second String : %s\n", container);

}
