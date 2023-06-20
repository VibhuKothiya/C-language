#include<stdio.h>
//Write C program to find sum of first and last digit of a number.

	int main(){
		
		int n, last, first, sum=0;
		
		printf("Enter the number: ");
		scanf("%d", &n); //1234
		
		last=n%10; 		//ans=4 is last digit		
		
		while(n>=10){
			n/=10;					
		}
			first=n;   	//ans=1 is first digit
				
			sum=last+first;
			
			printf("The sum of first & last digit is: %d\n", sum);
			
			return 0;
	}
