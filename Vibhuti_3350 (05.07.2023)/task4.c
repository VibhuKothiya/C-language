//4.WAP to convert given string in uppercase.

#include<stdio.h>

	int main(){
		
		char str[100];
		
		printf("Enter the text: ");
		gets(str);
		
		strupr(str);	//converts string into uppercase			
					
		puts(str);		//print string in uppercase			
		
		return 0;
	}

	
