#include<stdio.h>
	int main(){
		int a,b,c;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		printf("enter C: ");
		scanf("%d", &c);
		
		a > b?
			a > c?
				printf("A is max")
				:
				printf("C is max")
		:
		b > c?	
				printf("B is max")
				:
				printf("C is max");	
		
		
	return 0;	
	}
