#include<stdio.h>
	int main(){
		
		int n, a=1;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		do{
			
			printf("%d x %d = %d\n", n, a, n*a);
			a++;					
			
		}while(a<=10);
			
		return 0;
	}
