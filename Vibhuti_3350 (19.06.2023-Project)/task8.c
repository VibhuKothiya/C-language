#include<stdio.h>
// Program Check weather num is prime or not

	int main(){
		
		while(1){
		
		int n, i, count=0;
		
		printf("Enter the number: ");
		scanf("%d", &n);	//23
		
		for(i=1; i<=n; i++){
			
			if(n % i == 0){	//23%1==0 & 23%23==0				
				count++;	// count=2	
			}			
		}
		
		if(count == 2){
			printf("%d is a prime number\n\n", n);
		}
		else{
			printf("%d is not prime number\n\n", n);
		}
			
		}		
		return 0;
	}
