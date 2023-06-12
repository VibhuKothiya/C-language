#include<stdio.h>
	int main(){
		int a,b,c;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		printf("enter C: ");
		scanf("%d", &c);
		
		if(a<b){
			if(a<c){
				printf("Minimum No. is A: %d", a);
				}
			else{
				printf("Minimum No. is C: %d", c);
				}			
		}
		else{
		
		if(b<c){
			printf("Minimum No. is B: %d", b);
		}
		else{
			printf("Minimum No. is C: %d", c);
		}
		}
		
		return 0;		
	}
	
	
	
	
