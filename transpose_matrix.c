#include <stdio.h>

int main(){
	int A[10][10],transpose[10][10], i,j,row,col;
	
	printf("Enter number of rows and columns for the matrix:");
	scanf("%d %d",&row, &col);
	
//	input element for matrix

	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		transpose[j][i] = A[i][j];	
		}
	}
	printf("\n Simple Matrix\n");
		
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
		
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Transpose Matrix\n");
	
	for(i=0; i<col; i++){
		for(j=0; j<row; j++){
			printf("%d",transpose[i][j]);
		}
		printf("\n");
	}
}
