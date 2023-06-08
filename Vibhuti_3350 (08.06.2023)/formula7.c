#include<stdio.h>
	int main(){
		//(x+y+z)² = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x))

		int ans;
		int x=5, y=5, z=5;
		ans=(x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
		printf("The value of (x+y+z)^2 is %d", ans);
		
		return 0;
	}
