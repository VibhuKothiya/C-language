#include<stdio.h>
	int main(){
		//(x+y)3 = (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y)

		int ans;
		int x=5, y=5;
		ans=(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
		printf("The value of (x+y)^3 is %d", ans);
		
		return 0;
	}
