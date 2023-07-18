//3. C program to reverse an array using pointers

#include<stdio.h>

	int main(){
		
		int arr[] = {11,22,33,44,55,66,77};
		int *ptr[7], i, temp;
		
		
		for(i=0; i<7; i++){			
			
			ptr[i] = &arr[i];
			printf("%d\t", *ptr[i]);
		}
		
		printf("\n");
		
		//reverse
		
		for(i=0; i<3; i++){			
			
			ptr[i] = &arr[i];
			
			temp = *ptr[i];
			*ptr[i] = *ptr[6-i];
			*ptr[6-i] = temp;
			
		}
		
		for(i=0; i<7; i++){			
			
			printf("%d\t", *ptr[i]);
		}		
		
		return 0;
	}

