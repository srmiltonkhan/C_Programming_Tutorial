#include <stdio.h>

int main(){
	int x,y;
	int min,max;
	
	printf("Enter two integer:");
	
	scanf("%d%d",&x,&y);
	
	min_max(x,y,&min,&max);
	
	printf("%d <= %d",min,max);
	
	return 0;
}

void min_max(int x,int y,int *min, int *max){
	if(x>y){
		*max = x;
		*min = y;
	}else{
		*max = y;
		*min = x;
	}
}




