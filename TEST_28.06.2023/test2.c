#include<stdio.h>
	int main(){
		int i, j, k, a=2, b=3;
		char arr[]={'T', 'e', 'c', 'h', 'w', 'a', 'r'};

		for(i=1; i<=9; i++){
			
			for(k=9; k>i; k--){
				printf(" ");
			}
			
			for(j=1; j<=i; j++){
				
				if(i%2==0){
					printf("+");
					
				}else{					
					printf("%d", j);
				}		
				
			}
			printf("\n");
		}
		
		for(i=1; i<=1; i++){
			
			for(j=0; j<9; j++){
				
				if(j==7){
					
					printf("%d", a);
				}
				else if(j==8){
					printf("%d", b);
				}
				else {
					
					printf("%c", arr[j]);
				}			
			}
		}
		printf("\n");
		
		for(i=9; i>=1; i--){
							
			for(k=i; k<9; k++){	
							
				printf(" ");
			}				
				for(j=i; j>=1; j--){
					
					printf("%d", j);
				}
				printf("\n");
			}
			return 0;
}
