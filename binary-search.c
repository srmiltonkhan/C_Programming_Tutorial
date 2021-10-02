#include <stdio.h>

int main(){
	int num[]= {1,3,5,6,40,50,60,100};
	int item = 100;
	
	int left, right, middle;
	left = 0;
	right = 7;
	
	while(left<=right){
		middle = (left+right)/2;
	if(num[middle]==item){
		printf("Item found at index: %d\n",middle);
		return 0;
	}else if(num[middle]<item){
		left = middle+1;
	}else{
		right= middle-1;
	}
	}
	
	printf("Item not found\n");
	return 0;
}
