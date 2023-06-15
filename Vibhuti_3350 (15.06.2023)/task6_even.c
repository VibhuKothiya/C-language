#include<stdio.h>
// WAP to print even no. from N to 1 using while loop.
	int main(){
		int a=1;
		int n;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		while(a<=n){
			if(n%2==0){
				printf("%d\n", n);
			}
			n--;			
		}			
		return 0;
	}
