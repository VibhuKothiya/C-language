#include<stdio.h>
	int main(){
		
		int n, a, sum=0;
		
		printf("Enter the value of N: ");
		scanf("%d", &n);
		
		for(a=1; a<=n; a++){
			
			sum += a;					
		}
		printf("%d", sum);	
		
		return 0;
	}
