#include<stdio.h>
	
	int main(){
		
		int i, j, k;
		
		for(i='A'; i<='E'; i++){
			
			for(k='A'; k<i; k++){
					
					printf(" ");
				}
			
			for(j=i; j<='E'; j++){				
				
				printf("%c", j);				
			}
			printf("\n");
		}
				
		return 0;
	}
