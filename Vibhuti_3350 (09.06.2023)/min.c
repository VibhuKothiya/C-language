#include<stdio.h>
    //WAP to Find min. no. from given 2 no. using if else.
	int main(){
		int a, b;
		
		printf("enter number for a: ");
		scanf("%d", &a);
		
		printf("enter number for b: ");
		scanf("%d", &b);
		
		if(a<b){
			printf("The minimum number is a: %d", a);			
		}
		else{
			printf("The minimum number is b: %d", b);
		}
		
		return 0;
		
	}
