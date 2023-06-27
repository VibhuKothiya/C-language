//4.WAP to find peform addition of 1D array & store it into another.

#include<stdio.h>
	int main(){
		
		int n;
		
		printf("Enter the size: ");
		scanf("%d", &n);
		
		int arr1[n], arr2[n], sum[n];
		int i;
		
		for(i=0; i<n; i++){
			
			printf("Enter the value of arr1[%d]: ", i);
			scanf("%d", &arr1[i]);		
		}		
		for(i=0; i<n; i++){
			
			printf("Enter the value of arr2[%d]: ", i);
			scanf("%d", &arr2[i]);				
			
		}
		for(i=0; i<n; i++){			
			
			sum[i]=arr1[i]+arr2[i];	
		}
		for(i=0; i<n; i++){	
			
			printf("The sum of %d + %d = %d\n", arr1[i], arr2[i], sum[i]);
		
		}
		return 0;
	}
