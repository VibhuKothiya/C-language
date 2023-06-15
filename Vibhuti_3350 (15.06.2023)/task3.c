#include<stdio.h>
//WAP to print 1 to N using while loop.
	int main(){
		int a=1;
		int n;
		
		printf("enter the value of N: ");
		scanf("%d", &n);		
		
		while(a<=n){
			
			printf("%d\n", a);
			a++;
		}	
		
		return 0;
	}
