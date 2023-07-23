//2. C program to read a file and display its contents.

#include<stdio.h>

	int main(){
		
		FILE *ptr;
		char name[50];
		
		ptr = fopen("File handling.txt", "r");
		
		if(ptr == NULL){
			
			printf("File not found...");
		}
		else{
			
			fgets(name, 50, ptr);
			printf("%s", name);			
			
			fclose;			
		}
		
		return 0;
	}
