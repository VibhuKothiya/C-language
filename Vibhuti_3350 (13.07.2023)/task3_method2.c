// 3. C program to find length of all Array Elements by passing array as an argument using User Define Functions.
//method: 2

#include<stdio.h>
	
	void len(int arr[]){
		
		int i, count = 0;
		
		while(arr[count]!='\0'){
			
			count++;
		}
		
		printf("Length of array is %d", count);
		
	}
	
	
	// Driver code
	
	int main(){
		
		int arr[] = {7,5,2,3,5,8,9,6,2,3,5,4,5,5,5,8,7,9, '\0'};
		
		len(arr);
		
		return 0;
	}
