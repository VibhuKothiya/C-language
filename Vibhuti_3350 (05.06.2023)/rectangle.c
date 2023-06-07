#include<stdio.h>
	int main(){
		int width, length;
		printf("enter the area of width:");
		scanf("%d", &width);
		printf("enter the area of length:");
		scanf("%d", &length);
		int Rectangle=width*length;
		printf("area of rectangle is %d", Rectangle);
		return 0;
	}
