//5.WAP to find peform merging of 1D array & store it into another.

#include<stdio.h>
	int main(){
		
		int n1, n2;
		int arr1[n1], arr2[n2], merg[n1+n2];
		int i, j, k;
		
		printf("Enter the size: ");
		scanf("%d", &n1);		
		
		
		for(i=0; i<n1; i++){
			
			printf("Enter the value of arr1[%d]: ", i);
			scanf("%d", &arr1[i]);		
		}
		
		printf("Enter the size: ");
		scanf("%d", &n2);	
			
		for(i=0; i<n2; i++){
			
			printf("Enter the value of arr2[%d]: ", i);
			scanf("%d", &arr2[i]);				
		}			
				
		for(i=0; i<n1; i++){			
			
			merg[i] = arr1[i];		
		}
		for(j=0; j<n2; j++){			
			
			merg[i+j] = arr2[j];	
		}		
		for(k=0; k<n1+n2; k++){			
			
			printf("%d ", merg[k]);	
		}
		return 0;
	}
