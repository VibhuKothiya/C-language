#include<stdio.h>
	int main(){
		//Addition +
		float x = 24.5 + 24.5;
		float y = x + 25;
		float sum = x + y;
		
		printf("%.2f\n\n\n", sum);
		
		//Substraction -
		int a = -925;
		int b = -259;
		int sub = a - b;
		printf("%d\n\n\n", sub);
		
		//Multiplication *
		int n = 5;
		int square = n * n;	
		int cube = n * n * n;	
		printf("%d\n\n\n", square);
		printf("%d\n\n\n", cube);
		
		//Division /
		float A = 13;
		float B = 2;		
		printf("%.1f\n\n\n", A / B);
		
		//Modulus %
		int X = 999;
		int Y = 25;		
		printf("%d\n\n\n", X % Y);
		
		
		return 0;
	}
