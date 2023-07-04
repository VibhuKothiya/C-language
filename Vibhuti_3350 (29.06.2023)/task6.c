//6.WAP to perform coulmn-wise sum of 2D array.

#include<stdio.h>
	
	int main(){
		
		int m, n;
		
		printf("Enter the size of row & column:  ");
		scanf("%d %d", &m, &n);
		
		int arr[m][n];
		int i, j, sum=0;
		
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				printf("The value of [%d][%d]: ", i, j);
				scanf ("%d", &arr[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				printf("%d ", arr[i][j]);				
			}
			printf("\n");
		}
//result		
		for(j=0; j<m; j++){
			sum=0;
			for(i=0; i<n; i++){
				sum+=arr[i][j];				
			}
			printf("The sum of elements of column in matrix is %d\n", sum);		
		}		
				
		return 0;
	}
