#include<stdio.h>
/*WAP to Find if a given no. is neutral or not using
ladder if else.*/
	int main(){
		int a;
		
		printf("enter the value of a: ");
		scanf("%d", &a);
		
		if(a>0){
			printf("The number is positive");
		}
		else if(a<0){
			printf("The number is nagative");
		}
		else{
			printf("The number is neutral");
		}
		
		return 0;
	}
