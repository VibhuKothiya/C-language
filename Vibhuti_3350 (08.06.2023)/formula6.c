#include<stdio.h>
	int main(){
		//(x-y-z)3 = (x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z)+(3*(z+x))

		int ans;
		int x=5, y=5, z=5;
		ans=(x*x*x) - (y*y*y) - (z*z*z) - (3*(x+y))+(3*(y+z))+(3*(z+x));
		printf("The value of (x-y-z)^3 is %d", ans);
		
		return 0;
	}
