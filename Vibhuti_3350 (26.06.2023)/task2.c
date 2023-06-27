//2.WAP to find length of 1D array.

#include<stdio.h>

	int main(){
		
		int arr[]={0,1,2,3,7,2,4,4,5,6,6,8,3,5,0,5,8,10,58,96,23,56,87,12,01,245,689,0,0,0,568};
		
		int length=sizeof(arr)/sizeof(arr[0]);		
		
		
		printf("The length of array is %d", length);
		
		
		return 0;
	}
