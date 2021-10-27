#include <stdio.h>
void show(); // prototype decalte a function
	static second = 10;
void main(){
	show();
	show();
	show();
	printf("%d",second);
}

void show(){
	int first = 10;

	
	printf("First value: %d \t Second Value is: %d \n", first, second);
	++first;
	++second;
}
