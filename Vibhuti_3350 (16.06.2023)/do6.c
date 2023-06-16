#include<stdio.h>
int main(){
	
	int n, a=1;
	
	printf("enter the value of N: ");
	scanf("%d", &n);
	
	do{
		if(n%2==0){
			
		printf("%d\n", n);	
					
		}		
		n--;
		
	}while(a<=n);
	
	return 0;
}
	
