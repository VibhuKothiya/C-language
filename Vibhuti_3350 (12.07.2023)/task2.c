//2.WAP to find if a given number is divisible by 3 & 5 both or not using UDF.

#include<stdio.h>

void div(int n){
		
		if(n%3==0 && n%5==0){
			
			printf("%d is divisible by 3 & 5 both", n);
		}
		else {
			printf("%d is not divisible by 3 & 5 both", n);
		}
	}

int main(){
	
	int a; 
	
	printf("Enter any number: ");
	scanf("%d", &a);
	
	div(a);	
	
	return 0;
}
