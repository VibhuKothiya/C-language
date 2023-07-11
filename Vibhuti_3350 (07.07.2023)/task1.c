// 1. Write C program to check whether a string is palindrome or not.
	
 #include<stdio.h>
 #include<string.h>
 
 	int main(){
 		
 		char str[50];
 		
 		printf("Enter the text: ");
		gets(str);
		
		char org[20];
		strcpy(org,str);
		
 		
 		puts(str);
 		puts(strrev(str));		
 		
 		int z = strcmp(str,org);
 		
 		if(z==0){ 	
		 		
 			printf("%s is a palindrome", org);
		 }
		 else{
		 	
		 	printf("%s is not a palindrome",org);
		 }
 		
 		
 		return 0;
	 }	


