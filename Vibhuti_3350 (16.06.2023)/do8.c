#include<stdio.h>
	int main(){
		
		int n, a=1, sum=0;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		do{
			sum += a;					
			a++;					
			
		}while(a<=n);
		
		printf("%d", sum);
			
		return 0;
	}
