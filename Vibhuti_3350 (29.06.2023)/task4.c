//4.WAP to find peform addition of 2D array & store it into another.

#include<stdio.h>
	int main(){
		int m, n;
//first matrix	
		printf("Enter the size of first matrix: ");
		scanf("%d %d", &m, &n);
		
		int arr1[m][n];
		int i, j;
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("Enter the first matrix value [%d] [%d]: ", i, j);
				scanf("%d", &arr1[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
							
				printf("%d ", arr1[i][j]);				
			}
			printf("\n");
		}
	//second matrix		
		
		printf("Enter the size of second matrix: ");
		scanf("%d %d", &m, &n);
		
		int arr2[m][n];
		
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("Enter the second matrix value [%d] [%d]: ", i, j);
				scanf("%d", &arr2[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
							
				printf("%d ", arr2[i][j]);				
			}
			printf("\n");
		}
	//Addition of 02 matrix
		int arr3[m][n];
	
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
							
				arr3[i][j]=arr1[i][j] + arr2[i][j];
				printf("%d ", arr3[i][j]);		
			}
			printf("\n");
		}		
		
		return 0;
	}
