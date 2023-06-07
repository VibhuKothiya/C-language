#include<stdio.h>
	int main(){
		int P, R, T;
		printf("entre the amount: ");
		scanf("%d", &P);
		printf("entre the rate of interest: ");
		scanf("%d", &R);
		printf("entre the time: ");
		scanf("%d", &T);
		int SI=(P*R*T)/100;
		int Total=P+SI;
		printf("Simple Interest is: %d\n", SI);
		printf("Total amount is: %d", Total);
		
		return 0;
		
	}
