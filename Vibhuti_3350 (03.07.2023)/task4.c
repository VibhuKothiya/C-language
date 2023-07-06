//4. Write C program to addition of two matrices

#include<stdio.h>

	int main(){
		
		int m, n, i, j; 
				
	//first matrix	
	
		 printf("Enter the size of first matrix: ");
		 scanf("%d %d", &m, &n);
		 
		 int arr1[m][n];
		 
		 for(i=0; i<m; i++){
		 	
		 	for(j=0; j<n; j++){			 
		 	
		 	printf("Enter the elements of first matrix [%d][%d]: ", i, j);
		 	scanf("%d", &arr1[i][j]);
		 	}
		 	printf("\n");
		 }
	//print first matrix
	
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
		 	
		 	printf("Enter the elements of second matrix [%d][%d]: ", i, j);
		 	scanf("%d", &arr2[i][j]);
		 	}
		 	printf("\n");
		 }
		 
	//print second matrix
	
		for(i=0; i<m; i++){
		 	
		 	for(j=0; j<n; j++){			 
		 	
		 	printf("%d ", arr2[i][j]);
		 	
		 	}
		 	printf("\n");
		}
			printf("\n\n");	 
			 
	// Addition of 02 matrix
	
	int sum[i][j];
		 
		 for(i=0; i<m; i++){
		 	
		 	for(j=0; j<n; j++){			 
		 	
		 	sum[i][j] = arr1[i][j] + arr2[i][j];
		 	
		 	printf("%d ", sum[i][j]);
		 	
		 	}
		 	printf("\n");
		 }	 
		
		
		return 0;
	}

