//3.WAP to convert given string in lowercase.

#include<stdio.h>

	int main(){
		
		char str[100];
		
		printf("Enter the text: ");
		gets(str);
		
		strlwr(str);	//converts string into lowercase			
					
		puts(str);		//print string in lowecase			
		
		return 0;
	}

	
