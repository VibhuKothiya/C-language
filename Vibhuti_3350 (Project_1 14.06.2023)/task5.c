#include<stdio.h>
	int main(){
	float unit, total, surcharge, total_bill;
	
	printf("Enter the number of units consumed: ");
	scanf("%f", &unit);
	
	if(unit<=50){
		
		total = unit * 0.50;		
	}
	else if(unit<=150){
		
		total = (unit - 50) * 0.75 + 25;		
	}
	else if(unit<=250){
		
		total = (unit - 150) * 1.20 + 75 + 25;		
	}
	else {
		
		total = (unit - 250) * 1.50 + 120 + 75 + 25;		
	}
	
	surcharge = total * 0.20; // 20% surcharge
	
	total_bill = surcharge * total;
	
		printf("Your total electircity bill is: %.2f", total_bill);	
	
	
	return 0;
	}
