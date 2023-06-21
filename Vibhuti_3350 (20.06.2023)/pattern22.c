#include <stdio.h>
int main(){

	int i,j;
	char count='A';
		
		for(i='A'; i<='E'; i++){		//for no. of rows
			
			for(j='A'; j<=i; j++){ 		// for no. of loops repeted
			
				printf("%c ", count);	//for print the character, 
				
				count++;				//incerement print character by 1
			}
			printf("\n");
		}     
   
   return 0;
}

