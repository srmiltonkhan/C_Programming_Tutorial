#include <stdio.h>

int main(){
	
	int x,y;
	int min,max;
	
	
	printf("Enter two integer: ");
	scanf("%d%d",&x,&y);
	min_max(x,y,&min,&max);
	printf("%d <= %d", min, max);
	return 0;
}


void min_max(int a, int b, 
		int *min, int *max){
	if(a>b){
		*max=a;
		*min=b;
	}
    else{
		*max=b;
		*min=a;
	}
}

