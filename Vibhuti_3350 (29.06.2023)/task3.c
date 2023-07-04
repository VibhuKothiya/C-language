//3.WAP to find average of 2D array.

#include<stdio.h>

	int main(){
		
		int m, n;
		
		printf("Enter the size of row & col: ");
		scanf ("%d %d", &m, &n);
		
		int i, j, sum=0, count=0;
		int arr[m][n];
		
	// for enter size of row & column	
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("The value of arr[%d][%d]: ", i, j);
				scanf("%d", &arr[i][j]);
			}
			printf("\n");
		}
		
	// for print row x column
	
	for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				printf("%d ", arr[i][j]);				
			}
			printf("\n");
		}	
			printf("\n");
			
	// print each row avrage		
		for(i=0; i<m; i++){
				sum=0;
				count=0;
			
			for(j=0; j<n; j++){
				
				sum+=arr[i][j];
				count++;
			}
			printf("Avrage of row %d: %d", i+1, sum/count);			
			printf("\n");		
		}
			printf("\n");
			
	// print each column avrage		
		for(j=0; j<n; j++){
				sum=0;
				count=0;
			
			for(i=0; i<m; i++){
				
				sum+=arr[i][j];
				count++;
			}
			printf("Avrage of col %d: %d", j+1, sum/count);			
			printf("\n");		
		}		
		
		return 0;
	}
