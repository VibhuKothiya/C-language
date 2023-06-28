#include<stdio.h>
	int main(){
		
		int i, j, k;
		
		for(i=1; i<=7; i++){
			
			for(k=7; k>i; k--){
				printf(" ");
			}
			
			for(j=1; j<=i; j++){
				
				printf("@");
			}
			printf("\n");
		}
		for(i=7; i>=1; i--){
			
		for(k=i; k<7; k++){
				printf(" ");
			}			
			
			for(j=i; j>=1; j--){
				
				if(i%2==0){
					printf("+");
										
				}else{
			
					printf("%d", j);
				}
			}
			printf("\n");
		}
		
		return 0;
	}
