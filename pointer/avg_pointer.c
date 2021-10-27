#include <stdio.h>

int main(){
	
	
	int arr[5] = {1,2,3,4,5};
	
	int result = avg(arr,5);
	
	printf("The Avg is : %d", result);
}
int avg(int *arr, int size){
	
	int i, sum =0;
	double avg;
	
	for (i=0; i<size; i++){
		sum = sum + arr[i];
	}
	avg = (double)sum/size;
	return avg;
}

