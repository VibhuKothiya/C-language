#include<stdio.h>
// WAP to print sum 1 to N using while loop.
 int main(){
 	int a=1;
 	int n;
 	int sum=0;
 	
 	printf("enter the value of n: ");
 	scanf("%d", &n);
 	
 	while(a<=n){
 		sum += a; //sum=sum+a
	 	a++; 	 		
	}
	 	printf("%d\n", sum);

	 return 0;
 }
