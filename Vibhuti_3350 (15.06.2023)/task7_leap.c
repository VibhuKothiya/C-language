#include<stdio.h>
// WAP to Find leap year from 2000 to 3000 using while loop.
 int main(){
 	int year=2000;
 	
 	  printf("Leap years between 2000 and 3000:\n");
 	  
 	while(year<=3000){
	 
 		if((year%4==0) && (year%100!=0)||(year%400==0)){
 			printf("%d\t", year);
		 }
		 year++;
		}	
 	
 	return 0;
 }
