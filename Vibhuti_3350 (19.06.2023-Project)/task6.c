#include<stdio.h>
 // Write C program to calculate factorial of a number.
 
	int main(){
		
		int a, n, fact=1;
		
		printf("Enter the value of n: ");
		scanf("%d", &n);
		
		for(a=1; a<=n; a++){
			
			fact*=a;
			
			printf("factorial of %d is %d\n", a, fact);
			}		
		
		return 0;
	}
