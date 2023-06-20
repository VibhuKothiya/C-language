#include<stdio.h>
// Write C program to enter a number and print its reverse & check weather num is palindrome or not?
	
	int main(){
		
		int n, remainder, real, rever=0;
		
		printf("Enter the number: ");
		scanf("%d", &n); 		//157
		
		real=n;					// real=157
		
		while(n!=0){
			remainder=n%10;  			//r=7,r=5, r=1
			
			rever=rever*10+remainder; 	// rever=7, rever=75, rever=751
			
			n/=10;   					// n=15, n=1, 
		}
			if(rever==real){
			
				printf("%d number is palidrom", rever);
			
			}
			else{
				printf("%d number is not palidrom", rever);
			}		
		
		return 0;
	}
