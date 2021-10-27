#include <stdio.h>

int main(){
	int a = 10;
	
	while(a<20){
		printf("The value of a: %d\n", a);
		a++;
//		printf("%d",a);
		if(a>16){
			break;
		}
	}
	
	
	return 0;
}
