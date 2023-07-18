//2. C program to input and print array elements using pointers

#include<stdio.h>

	int main(){
		
		int arr[] = {25, 9,19,94,90,25};
		int *ptr, i;
		
		for(i=0; i<6; i++){
			
			ptr = &arr[i];
			
			printf("%d\t", *ptr);
		}
		
		
		return 0;
	}

