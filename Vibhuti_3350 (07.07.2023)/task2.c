//2. WAP to create login mechanism by entering right email & password.

#include <stdio.h>
#include <string.h>
	
	int main(){
		
		char email[50];
		char password[50];
		
		printf("Enter email id: ");
		scanf("%s", &email);
		
		printf("Enter password: ");
		scanf("%s", &password);
		
		char correctE[]="user@gmail.com";
		char correctP[]="password123";
		
		if((strcmp(email,correctE)==0 && strcmp(password,correctP)==0)){
			
			printf("Login Successful\n");
		}		
		else{
			printf("Login failed\n");
		}		
		
		
		return 0;
	}


