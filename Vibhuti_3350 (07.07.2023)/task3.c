/*3.WAP to check of given password is valid or not by satisfying below criteria
(1) password must contain at least one letter, one digit & one special symbol.
(2) password must be at least of 6 charactors.*/

#include<stdio.h>
#include<string.h>

	int main(){
		
		char password[18];
		
		printf("Enter the password: ");
		scanf("%s", &password);
		
		int len=strlen(password);
			
		int alpha = 0, digit = 0, symbol = 0;		
		int i;
		
		if(len >= 6 && len <= 18){
			
			for(i=0; i<len; i++){
				
				if((password[i] >= 'A' && password[i] <= 'Z') || (password[i] >= 'a' && password[i] <= 'z')){
					alpha = 1;
				}
				else if(password[i] >= '0' && password[i] <= '9'){
					digit = 1;
				}
				else{
					symbol = 1;
				}	
			}
		}
		else{
			printf("length should be between 6 to 18");
			
			return 0;
		}	
			
			if(alpha != 1){
				
				printf("one character must be required!");
			}
			else if(digit != 1){
				
				printf("one digit must be required\n");
			}
			else if (symbol != 1){	 
			 			
				printf("one symbol must be required\n");				
			}	
			else{
				printf("password is valid!");
			}		
		
		return 0;
	}
