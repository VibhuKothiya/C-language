//1.WAP to find square of each element using Pointer.

#include<stdio.h>

	int main(){
		
		int arr[]={5,10,15,20};
		
		int *sqr, i;	
		
		
		for(i=0; i<4; i++){
			
			sqr = &arr[i];
			
			printf("%u => %d\n", sqr, (*sqr) * (*sqr));
		}
		
		
		
		return 0;
	}
