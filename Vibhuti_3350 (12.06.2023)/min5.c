#include<stdio.h>
	int main(){
		int a,b,c,d,e;
		
		printf("enter A: ");
		scanf("%d", &a);
		
		printf("enter B: ");
		scanf("%d", &b);
		
		printf("enter C: ");
		scanf("%d", &c);
		
		printf("enter D: ");
		scanf("%d", &d);
		
		printf("enter E: ");
		scanf("%d", &e);
		
		if(a<b){
			if(a<c){
				if(a<d){
					if(a<e){
						printf("Minimum No. is A: %d", a);
						}
						else{
						printf("Minimum No. is E: %d", e);
						}					
				}
				else{
					if(d<e){
						printf("Minimum No. is D: %d", d);
					}
					else{
						printf("Minimum No. is E: %d", e);
					}
				}
			}
			else{
				if(c<d){
					if(c<e){
						printf("Minimum No. is C: %d", c);
					}
					else{
						printf("Minimum No. is E: %d", e);
					}
				}
				else{
					if(d<e){
						printf("Minimum No. is D: %d", d);
					}
					else{
						printf("Minimum No. is E: %d", e);
					}
				}
			}
		}
			else{
				if(b<c){
					if(b<d){
						if(b<e){
						printf("Minimum No. is B: %d", b);						
						}
						else{
						printf("Minimum No. is E: %d", e);
						}
					}
					else{
						if(d<e){
							printf("Minimum No. is D: %d", d);
						}
						else{
							printf("Minimum No. is E: %d", e);
						}
					}
				}
				else{
					if(c<d){
						if(c<e){
							printf("Minimum No. is C: %d", c);
						}
						else{
							printf("Minimum No. is E: %d", e);
						}
					}
					else{
						if(d<e){
							printf("Minimum No. is D: %d", d);
						}
						else{
							printf("Minimum No. is E: %d", e);
						}
					}
				}
			}		
				
		return 0;
		}
