#include<stdio.h>
	int main(){
		//(x-y)3 = (x*x*x) - (y*y*y) - ((3*x*y)*(x+y))

		int ans;
		int x=5, y=5;
		ans=(x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
		printf("The value of (x-y)^3 is %d", ans);
		
		return 0;
	}
