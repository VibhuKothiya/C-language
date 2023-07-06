//6. Write C program to find sum of diagonal elements of a matrix.

	int main(){		
	
		int m, n, i, j, sum=0;
		
		printf("Enter the size of matrix: ");
		scanf("%d %d", &m, &n);
		
		int matrix[m][n];
		
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
						
			}
			printf("\n");
		}
		printf("\n");
	//Sum of diagonal elements of a matrix	
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				if(i==j){
					sum+=matrix[i][j];						
				}					
			}
			printf("\n");
		}
		printf("The sum of diagonal elements of a matrix is %d", sum);		
		
		
		return 0;
	}
