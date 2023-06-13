#include<stdio.h>
	int main(){
		int a,b,c,d;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		printf("enter C: ");
		scanf("%d", &c);
		
		printf("enter D: ");
		scanf("%d", &d);
		
		a>b?
			a>c?
				a>d?
					printf("A is max")
					:
					printf("D is max")
			:
			 c>d?
			 	printf("C is max")
				:
				printf("D is max")
		:
		 b>c?
		 	b>d?
			 	printf("B is max")
				:
				printf("D is max")		
		 :
		  c>d?
			printf("C is max")
			:
			printf("D is max");
		
		return 0;
		
	}
