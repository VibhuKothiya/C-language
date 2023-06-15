#include<stdio.h>
// WAP to print odd no. from 1 to N using while loop.
	int main(){
		int a=1;
		int n;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		while(a<=n){
			if(a%2!=0){
				printf("%d\n", a);
			}
			a++;			
		}	
		
		return 0;
	}
