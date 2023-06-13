#include<stdio.h>
	int main(){
		char a;
		
		printf("Enter month: ");
		scanf("%c", &a);
		
		switch(a){
			case 'j':
				printf("January\n");			
				break;						
			case 'f':				
				printf("February\n");				
				break;			
			case 'm':				
				printf("March\n");			
				break;
			case 'a':				
				printf("April\n");				
				break;
			case 'M':				
				printf("May\n");				
				break;
			case 'J':				
				printf("June\n");				
				break;
			case 'u':				
				printf("July\n");				
				break;
			case 'g':				
				printf("August\n");				
				break;
			case 's':				
				printf("September\n");			
				break;
			case 'o':				
				printf("October\n");		
				
				break;
			case 'n':				
				printf("November\n");				
				break;
			case 'd':				
				printf("December\n");				
				break;
			default :
				printf("Invalid! Input");				
				
		}	
		
		return 0;
	}
