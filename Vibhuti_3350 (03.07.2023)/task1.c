// 1. Write C program to print all negative elements in an array.

#include<stdio.h>

	int main(){
		
		int m, n;
		
		printf("Enter the size of row & column: ");
		scanf("%d %d", &m, &n);
		
		int arr[m][n];
		int i, j;
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				printf("Enter the value of [%d][%d]: ", i, j);
				scanf("%d", &arr[i][j]);
			}
			printf("%\n");
		}
		
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				printf("%d ", arr[i][j]);				
			}
			printf("%\n");
		}
		
	//Print all negative elements in an array.	
	
		for(i=0; i<m; i++){
			
			for(j=0; j<n; j++){
				
				if(arr[i][j]<0){
					
					printf("%d\t", arr[i][j]);
				}						
			}
			printf("%\n");
		}			
		
		
		return 0;
	}
