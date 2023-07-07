//5.WAP to convert given string in titlecase.

#include<stdio.h>
#include<ctype.h>

	int main(){
		
		char str[100];
		
		printf("Enter the text: ");
		gets(str);
	
	//convert first character to uppercase
		
		if(str[0] >= 'a' && str[0] <= 'z'){
			
			str[0]-=32;	
					
			puts(str);
		}
		
	//convert after space character to uppercase
		int i;
	
		for(i=1; str[i]!='\0'; i++){
			
			if(str[i-1]==' '){
				
				str[i] = toupper(str[i]);
			}
			
		}
		printf("Title Case: ");
		puts(str);	
		
		return 0;
	}

	
