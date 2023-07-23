//3. C program to append data into a file.

#include<stdio.h>

	int main(){
		
		FILE *ptr;
		char name[50];
		
		ptr = fopen("Append.txt", "a");
		
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
