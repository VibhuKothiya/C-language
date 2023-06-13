#include<stdio.h>
	int main(){
		int a, b;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		a > b? printf("A is Max") : printf("B is Max");
		
		return 0;
	}
