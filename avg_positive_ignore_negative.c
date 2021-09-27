#include <stdio.h>

int main(){
	int num, i,listNum,count=0;
	float sum = 0;
	
	printf("Enter Number You want to: ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++){
		scanf("%d",&listNum);
		if(listNum%2==0){
			sum = sum+listNum;
			count++;
		}
	}
	printf("Total Positive Number: %d\n",count);
	printf("The Total Positive Number Sum is: %.2f\n",sum);
	printf("Average is: %.2f\n",sum/count);
}
