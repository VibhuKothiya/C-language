#include<stdio.h>
// Write C program to input any character and check whether it is alphabet, digit or special character.
	int main(){		
		char value;
		
			printf("Enter the value: ");
			scanf("%c", &value);
		
		if((value>='a' && value<='z')||(value>='A' && value<='Z')){
		
			printf("Alphabet");
		}
		else if(value>='0' && value<='9'){
		
			printf("Digit");
		}
		else{
		
			printf("Special Character");
		}
			
		return 0;			
	}
	
