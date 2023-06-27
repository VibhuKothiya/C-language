// 1.WAP to get & print 1D array of N elements.

#include<stdio.h>

	int main(){
		int n; 
		
		printf("Enter the size: ");
		scanf("%d", &n);	//10	
		
		int arr[n];			//10 no. of box from 0 to 9
		int i;				// i for value  from 0 to 9
		
		for(i=0; i<n; i++){		// loop for enter 10 value in array
			printf("Enter the value of [%d]: ",i);
			scanf("%d", &arr[i]);
		}
		for(i=0; i<n; i++){		// loop for print 1 to 10 array 
			printf("%d\n", arr[i]);
		}		
		
	return 0;
	}
