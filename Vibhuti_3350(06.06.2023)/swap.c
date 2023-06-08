#include<stdio.h>
	int main(){
		int a,b,c;
		
		printf("enter the value of a ");
		scanf("%d", &a);
		
		printf("enter the value of b ");
		scanf("%d", &b);
		
		c=a;
		a=b;
		b=c;
		printf("A: %d\n", a);
		printf("B: %d", b);
		
		return 0;
	}
