// 1.WAP to get & print 2D array of N elements.

#include<stdio.h>

	int main(){
		
		int m, n;
		
		printf("Enter the size of row & col: ");
		scanf("%d %d", &m, &n);
		
		int arr[m][n];
		int i, j;
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("Enter the value of [%d] [%d]: ", i, j);
				scanf("%d", &arr[i][j]);
			}
			printf("\n");
		}
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("%d ", arr[i][j]);
				
			}
			printf("\n");
		}		
		
		return 0;
	}
