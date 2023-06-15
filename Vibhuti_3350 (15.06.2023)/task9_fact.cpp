#include<stdio.h>
// WAP to calculate the factorial of N. using while loop.
	int main(){
		int n;		
		int a=1;
		int fact=1;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		while(a<=n){
			fact*=a;
			printf("factorial of %d is %d\n", a, fact);
			a++;
		}
				
		return 0;
	}
