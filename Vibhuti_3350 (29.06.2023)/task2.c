//2.WAP to find length of 2D array.

#include<stdio.h>
	
	int main(){
		
		int arr[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
		
		int row_len = sizeof(arr)/sizeof(arr[0]);	// 60/12=5
		
		int col_len = sizeof(arr[0])/sizeof(arr[0][0]);	// 12/4=3
		
			printf("row length %d\n", row_len);
			
			printf("col length %d", col_len);
		
		return 0;
	}
