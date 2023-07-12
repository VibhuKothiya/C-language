//1.WAP to find cube of given no using UDF.

#include<stdio.h>
	
	void cube(n){					//TSRN
		
		printf("Cube of %d is %d", n, n*n*n);
	}

	int main(){
	
	int a;
	
	printf("Enter any number: ");
	scanf("%d", &a);
	
	cube(a);
	
	return 0;
}
