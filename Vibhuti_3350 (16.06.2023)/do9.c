#include<stdio.h>
	int main(){
		
		int n, a=1, fact=1;
		
		printf("Enter the value of N: ");
		scanf("%d", &n);
		
		do{
			fact*=a;
			printf("factorial of %d is %d\n", a, fact);
			a++;					
			
		}while(a<=n);
			
		return 0;
	}
