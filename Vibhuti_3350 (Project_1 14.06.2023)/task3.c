#include<stdio.h>
//Write C program to find out max from 4 numbers using nested if.
	int main(){
	int a,b,c,d;
	
	printf("Enter A: ");
	scanf("%d", &a);
	
	printf("Enter B: ");
	scanf("%d", &b);
	
	printf("Enter C: ");
	scanf("%d", &c);
	
	printf("Enter D: ");
	scanf("%d", &d);
	
	if(a>b){
		if(a>c){
				if(a>d){
					printf("Maximun No. is A: %d", a);
					}
				else{
					printf("Maximun No. is D: %d", d);
				}
			}		
		else{
			if(c>d){
				printf("Maximun No. is C: %d", c);
				}
			else{
				printf("Maximun No. is D: %d", d);
			}
		}
	}
	else{
		if(b>c){
			if(b>d){
				printf("Maximun No. is B: %d", b);
			}
			else{
				printf("Maximun No. is D: %d", d);
			}
				
			}
		else{
			if(c>d){
				printf("Maximun No. is C: %d", c);					
				}
			else{
				printf("Maximun No. is D: %d", d);	
				}
			}
		}
	
		return 0;
	}
	
	
	
	
