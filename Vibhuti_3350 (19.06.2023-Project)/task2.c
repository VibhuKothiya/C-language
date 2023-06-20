#include<stdio.h>
//Write C program to print multiplication table of any number.
	
	int main(){
		
		int n, a;
		
		printf("Enter the number: ");
		scanf("%d", &n);
		
		for(a=1; a<=10; a++){
			
			printf("%d x %d = %d\n", n,a,n*a);
			
		}	
		
		return 0;
	}
