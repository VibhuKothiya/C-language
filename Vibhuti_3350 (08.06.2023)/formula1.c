#include<stdio.h>
	int main(){
		//(x+y)² = (x*x) + (2*x*y) + (y*y)
		int ans;
		int x=5, y=5;
		ans=(x*x) + (2*x*y) + (y*y);
		printf("The value of (x+y)^2 is %d", ans);
		
		return 0;
	}
