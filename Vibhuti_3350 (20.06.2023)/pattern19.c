#include <stdio.h>
int main(){

	int i,j,count=1;
		
		for(i=1; i<=5; i++){		//for no. of rows
			
			for(j=1; j<=i; j++){	// for no. of loops repeted
				printf("%d ", count);	//for print the number c=1, c=2, 
				count++;				//incerement print number by 1
			}
			printf("\n");
		}  
   
   
   return 0;
}

