//6.WAP to convert given string in togglecase.

#include<stdio.h>
	
	int main(){
		
		char str[50];
		int i;
		
		printf("Enter the text: ");
		gets(str);
		
		for(i=0; str[i]!='\0'; i++){
			
			if(str[i]>='a' && str[i]<='z'){
				
				str[i]-=32;
			}	
			else if(str[i]>='A' && str[i]<='Z'){
					
					str[i]+=32;
				}	
			
		}
			puts(str);		
		
		return 0;
	}
