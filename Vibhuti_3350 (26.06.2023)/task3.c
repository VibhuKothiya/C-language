//3.WAP to find average of 1D array.

#include<stdio.h>
	int main(){
		
		int n;
		
		printf("Enter the size: ");
		scanf("%d", &n);
		
		int arr[n];
		int i, sum=0;
		
		for(i=0; i<n; i++){
			
			printf("Enter the value of [%d]: ", i);
			scanf("%d", &arr[i]);
			
			sum+=arr[i];
		}		
		 	printf("The Avrage is %d", sum/n);		
		
		return 0;
	}
