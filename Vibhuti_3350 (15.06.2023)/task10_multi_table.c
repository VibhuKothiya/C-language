#include<stdio.h>
// WAP to print thr multiplication table of N using while loop.
	int main(){
		int n;		
		int a=1;
		int Ans;
		
		printf("enter the value of N: ");
		scanf("%d", &n);
		
		while(a<=10){
			Ans=n*a;
			printf("%d*%d=%d\n", n, a, Ans);
			a++;						
		}
						
		return 0;
	}
