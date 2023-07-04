//8.WAP to perform anti-diagonal sum of 2D array.

#include<stdio.h>
	
	int main(){
		
		int m, n;
		
		printf("Enter the size of row & column:  ");
		scanf("%d %d", &m, &n);
		
		int arr[m][n];
		int i, j, sum1=0, sum2=0, result;
		
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
	
//anti-diagonal		
		for(i=0; i<m; i++){
			
			sum2+=arr[i][n-i-1];	
								
			}
			printf("sum of anti-diagonal is %d\n",sum2);					
				
		return 0;
	}
