#include<stdio.h>
//WAP to print N to 1 using while loop.
	int main(){
		int a=1;
		int n;
		
		printf("enter the value of N: ");
		scanf("%d", &n);		
		
		while(a<=n){
			printf("%d\n", n);			
			n--;
		}
		
		return 0;
	}
