#include<stdio.h>
//Write C program to print all alphabets from a to z. using do while loop
	
	int main(){
		
		char i='a';
		
		do{
			printf("%c\t", i);
			i++;
			
		}while(i<='z');				
		
		return 0;
	}
