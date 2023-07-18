//4. Program to find length of string using pointer

#include<stdio.h>
#include<string.h>

	int main(){
		
		char str[15];
		int i, count=0;		
		
		printf("Enter text: ");
		scanf("%s", str);	
		
		char *ptr;	
		ptr = str;					//ptr points to the first character of the array
		
		for(i=0; *ptr!='\0'; i++){
			
			ptr++;					// ptr moves to next character in string
			
			count++;		
		}
		printf("Length of string is %d", count);	
		
		
		return 0;
	}
