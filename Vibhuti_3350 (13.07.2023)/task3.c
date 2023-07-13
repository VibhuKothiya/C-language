// 3. C program to find length of all Array Elements by passing array as an argument using User Define Functions.
//method: 1
	
#include<stdio.h>
	void len(int arr[], int total_size){
		
		int length = total_size/sizeof arr[0];
		
		printf("Length of Array is %d\n", length);
	}
	
	// Driver code
	
	int main(){
		
		int arr[]={5,8,9,4,5,8,9,7,2,3,5,4,6,8,2};
		
		len(arr, sizeof(arr));
		
		
		return 0;
	}	
