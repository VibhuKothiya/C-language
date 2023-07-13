// 1. C program to find factorial of number using recursion.

#include<stdio.h>
	
	int fact(int a){
		
		if(a>0){
			
			return a*fact(a-1);			//function call itself		
		}
		else{
			
			return 1;
		}
	}
	
	// Driver code
	
	int main(){
		
		int n;
		
		printf("Enter any number: ");
		scanf("%i", &n);
		
		fact(n);
		
		printf("factorial of %d is %d", n, fact(n));
		
		return 0;
	}
