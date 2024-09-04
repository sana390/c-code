#include<stdio.h>
int main(){
	int rows1, cols1, rows2, cols2;
	printf("Enter the number of 1st rows and 1st columns: ");
	scanf("%f %d", &rows1, &cols1);
	printf("Enter the number of rows and columns of 2nd matrix: ");
	scanf("%d %d", &rows2, &cols2);
	if(cols1 != rows2){
		printf("Matrices cannot be multiplied.");
		return 0;
	}
	
	int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];
	printf("Enter elements of 1st ,atrix: \n");
	for(int i =0; i<rows1; i++){
		for(int j =0; j<cols1; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}
	printf("Enter elements of the 2nd matrix: \n");
	for(int i =0; i<rows2; i++){
		for(int j =0; j <cols2; j++){
			result[i][j]=0;
			for(int k =0;k <cols1; k++){
				result[i][j] = result[i][j]+ matrix1[i][k]* matrix2[k][j];
			}
		}
	}
	printf("Result of matrix multiplication : \n");
	for(int i =0; i<rows1; i++){
		for(int j =0; j<cols2; j++){
			printf("%d", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
