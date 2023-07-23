//1. C program to create a file and write data into file.

#include<stdio.h>

	int main(){
		
		FILE *ptr;
		char name[50];
		
		ptr = fopen("File handling.txt", "w");
		
		if(ptr == NULL){
			
			printf("File not found...");
		}
		else{
			
			printf("Enter text: ");
			gets(name);
			
			fputs(name, ptr);
			
			fclose;
			
		}
		
		return 0;
	}
