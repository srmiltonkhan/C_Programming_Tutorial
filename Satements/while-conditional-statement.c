#include <stdio.h>

int main(){
	int n,count=1;
	float x,avg, sum=0.0;
	
	printf("How many number you want to store?:");
	scanf("%d",&n);
	
	while(count <=n){
		printf("X= ");
		scanf("%f",&x);
		sum=sum+x;
		count++;
	}
	printf("%.2f",sum);
	
	return 0;
}
