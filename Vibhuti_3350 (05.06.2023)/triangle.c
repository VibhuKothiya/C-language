#include<stdio.h>
	int main(){
		int base, height;
		printf("enter the area of base:");
		scanf("%d", &base);
		printf("enter the area of height:");
		scanf("%d", &height);
		int triangle= (base*height)/2;
		printf("area of triangle is %d", triangle);
		return 0;
		
	}
