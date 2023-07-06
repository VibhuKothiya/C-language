//5. Write C program matrix convert into transpose matrix.

#include<stdio.h>

	int main(){
		
		int m, n, i, j;
		
		printf("Enter the size of matrix: ");
		scanf("%d %d", &m, &n);
		
		int matrix[m][n], transpose[n][m];
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("Enter the elements of matrix [%d][%d]: ", i, j);
				scanf("%d", &matrix[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("%d ", matrix[i][j]);
				
				transpose[j][i] = matrix[i][j];			
			}
			printf("\n");
		}
			printf("\n\n");
			
	//matrix convert into transpose matrix.		
			
		for(i=0; i<n; i++){			
			
			for(j=0; j<m; j++){
				
				printf("%d ", transpose[i][j]);							
			}
			printf("\n");
		}
		
		return 0;
	}
