#include<stdio.h>
int main(){
	
	int n, a=1;
	
	printf("enter the value of N: ");
	scanf("%d", &n);
	
	do{
		printf("%d\n", a);
		a++;
		
	}while(a<=n);
	
	return 0;
}
	
