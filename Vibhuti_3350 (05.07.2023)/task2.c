//2.WAP to convert given character in uppercase.

#include<stdio.h>

	int main(){
		
		char Alphabet;
		
		printf("Enter a character: ");
		scanf("%c", &Alphabet);
		
		if(Alphabet >= 'a' && Alphabet <= 'z'){
			
			Alphabet-=32;	
					
			printf("%c", Alphabet);
		}	
		
		return 0;
	}

	
