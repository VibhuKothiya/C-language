#include<stdio.h>
// Write C program to check a number is even or odd using ternary operator.
	int main(){	
	int a;
	
	printf("Enter any number: ");
	scanf("%d", &a);
	
	(a%2==0)?printf("The number is even"):printf("The number is odd");
	
	return 0;
	}
