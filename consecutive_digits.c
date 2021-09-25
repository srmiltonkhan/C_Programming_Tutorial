#include <stdio.h>
int main(){
	int n1, n2, i;
	
	printf("Enter the First Number :");
	scanf("%d",&n1);
	
	printf("Enter the Last Number :");
	scanf("%d",&n2);
	
	for(i=n1; i<=n2; i++){
	  printf("%d\n",i);	
	}
	return 0;
}
