#include<stdio.h>
	int main(){
		int a,b,c,d;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		printf("enter C: ");
		scanf("%d", &c);
		
		printf("enter D: ");
		scanf("%d", &d);
		
		if (a>b){
			if(a>c){
				if(a>d){
					printf("Maximum No. is A %d", a);
				}
				else{
					printf("Maximum No. is D %d", d);
				}
			}
			else{
				if(c>d){
					printf("Maximum No. is C %d", c);
				}
				else{
					printf("Maximum No. is D %d", d);
				}
			}
		}
		else{
			if(b>c){
				if(b>d){
				printf("Maximum No. is B %d", b);
				}
				else{
					("Maximum No. is D %d", d);
				}
			}
			else{
				if(c>d){
				printf("Maximum No. is C %d", c);
				}
				else{
				printf("Maximum No. is D %d", d);	
				}
			}			
		}
		return 0;
	}
		
		
		
		
		
		
		
