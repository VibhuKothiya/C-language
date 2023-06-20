#include<stdio.h>
// Write C program to count number of digits in a number.

	int main(){	
		
		int n, count=0;
		
		printf("Enter the number: ");
		scanf("%d", &n); //12345
		
		while(n!=0){
			n/=10;   	// n=n/10, ans=1234
			count++;				
		}
		printf("\nThe number of digits is: %d", count);
		
		return 0;
	}
