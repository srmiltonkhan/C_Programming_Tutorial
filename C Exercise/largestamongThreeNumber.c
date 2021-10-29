#include <stdio.h>

int main(){
	int n1,n2,n3;
	printf("Type three numbers:");
	
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3){
		printf("Number N1=%d is big.\n",n1);
	}else if(n2>n1 && n2>n3){
		printf("Number N2=%d is big.\n",n2);
	}else{
		printf("Number N3=%d is big.\n",n3);
	}
	
}
