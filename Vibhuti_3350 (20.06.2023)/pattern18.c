#include<stdio.h>
	
	int main(){
		
		int i, j;
		
		for(i=6; i>=2; i--){				
			
			for(j=6; j>=i; j--){
				
				printf("%d", j%2);				
			}
			printf("\n");
		}		
		
		return 0;
	}
