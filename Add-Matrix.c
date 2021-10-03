#include <stdio.h>

int main(){
	
	int i, j;
	int X[10][10], Y[10][10], R[10][10];
	
	
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("X[%d][%d]=",i,j);
			scanf("%d",&X[i][j]);
			printf("\n");
		}
	}
	printf("\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Y[%d][%d]=",i,j);
			scanf("%d",&Y[i][j]);
			printf("\n");
		}
	}
	printf("\n");
	

	
	printf("\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			R[i][j] =  X[i][j] + Y[i][j];	
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d",R[i][j]);
		}
		printf("\n");
	}
	
	
	
		
}
