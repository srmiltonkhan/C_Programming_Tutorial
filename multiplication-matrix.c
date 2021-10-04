#include <stdio.h>

int main(){
	
	int A[10][10], B[10][10], R[10][10], i,j,row,col;
	
	printf("Enter number of rows and columns for Matrix: ");
	scanf("%d%d",&row,&col);
	
	printf("\n Input For A Matrix\n");
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("\n Input For B Matrix\n");	
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("B[%d][%d]=",i,j);
			scanf("%d",&B[i][j]);
		}
	}
	
	printf("\nA Matrix: \n");	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\nB Matrix: \n");
		
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ",B[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n Multiplication A and B Matrix\n");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			R[i][j]= A[i][j] * B[i][j];
		}
	}
	

	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d ",R[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
