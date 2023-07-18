//1. C program to swap two numbers using pointers

#include<stdio.h>

	int main(){
		
		int a, b, temp;
		int *x, *y;
		
		printf("Enter A: ");
		scanf("%d", &a);
		
		printf("Enter B: ");
		scanf("%d", &b);
		
		x = &a;
		y = &b;
		
		// Before swapping
		
		printf("Before swapping\n");
		printf("A: %u => %d\n", x,*x);
		printf("B: %u => %d\n", y,*y);
		
		// After swapping
		
		temp = *x;
		*x = *y;
		*y = temp;
		
		printf("After swapping\n");
		printf("A: %u => %d\n", x,*x);
		printf("B: %u => %d\n", y,*y);		
		
		return 0;
	}
