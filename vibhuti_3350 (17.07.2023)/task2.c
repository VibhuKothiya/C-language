//2.WAP to swap two variables using Pointer.

#include<stdio.h>

	int main(){
		
		int x = 20, y = 120, temp;
		int *ptr1, *ptr2;
		
		ptr1 = &x;
		ptr2 = &y;		
		
		//Before swapping
		
		printf("Before swapping:\n");
		printf("x = %u => %d\n", ptr1, *ptr1);
		printf("y = %u => %d\n\n", ptr2, *ptr2);
				
		// Value swap using pointer
		
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		
		//After swapping
		
		printf("After swapping:\n");
		printf("x = %u => %d\n", ptr1, *ptr1);
		printf("y = %u => %d\n\n", ptr2, *ptr2);	
		
		
		return 0;
	}
