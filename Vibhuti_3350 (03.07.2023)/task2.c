//2. Write C program to find second largest number in array.

#include<stdio.h>

	int main(){
		
		int n, largest, second_largest; 
		
		printf("Enter the size of array: ");
		scanf ("%d", &n);
		
		int arr[n], i;
		
		for(i=0; i<n; i++){
			printf("Enter the elements of array[%d]: ", i);
			scanf("%d", &arr[i]);
		}
		largest=arr[0]; 
		second_largest=arr[1]; 
		
		if(second_largest>largest){
			largest=arr[1];
			second_largest=arr[0];			
		}
		
		for(i=1; i<n; i++){
			if(arr[i]>largest){					
				
				largest=arr[i];	
				second_largest=largest;			
								
			}
			else if(arr[i]>second_largest && arr[i]<largest){
				second_largest=arr[i];
			}
		}
			printf("The second largest number is %d", second_largest);
				
		
		return 0;
	}
