#include<stdio.h>
int main(){
	
	int year = 2000;
	
	do{
		if((year%4==0 && year%100!=0)||(year%400==0)){
			printf("%d\t", year);			
		}
		year++;
		
	}while(year<=3000);	  
	
	return 0;
}
	
