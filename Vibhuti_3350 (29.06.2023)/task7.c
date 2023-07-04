//7.WAP to perform diagonal sum of 2D array.

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
//diagonal		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				if(i==j){
					sum1+=arr[i][j];
				}								
			}						
		}
			printf("sum of diagonal is %d\n",sum1);
			
	return 0;			
}
