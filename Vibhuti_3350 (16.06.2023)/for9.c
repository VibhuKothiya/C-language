#include<stdio.h>
	int main(){
		
		int n, a, fact=1;
		
		printf("Enter the value of N: ");
		scanf("%d", &n);
		
		for(a=1; a<=n; a++){
			fact*=a;
			printf("factorial of %d is %d\n", a,fact);
		}
		
		return 0;
	}
