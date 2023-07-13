// 2. C program to find Sum of all Array Elements by passing array as an argument using User Define Functions.

#include<stdio.h>

	void sumofArray(int arr[], int n){
		
		int sum=0, i;		
		
		for(i=0; i<n; i++){
			
			sum += arr[i];
		}
		
		printf("Sum of all array is %d", sum);
	}		
	
	// Driver code
	
	int main(){
		
		int arr[50];
		int n, i;
		
		printf("Enter size of array: ");
		scanf("%d", &n);
		
		for(i=0; i<n; i++){
			
			printf("Enter the elements of array[%d]: ",i);
			scanf("%d", &arr[i]);
		}
			sumofArray(arr, n);
		
		
		return 0;
	}
