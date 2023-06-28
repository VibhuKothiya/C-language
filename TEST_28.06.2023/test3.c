// write a C program make a simple calculator using a switch case, create infinite calculator using loop

#include<stdio.h>
	int main(){
		
		char operator;
		float num1, num2, result;
		
		while(1){
		
		printf("Select any one operator from (+, -, *, /) or for quit select 'Q': \n");
		scanf(" %c", &operator);
		
		printf("Enter any two numbers: ");
		scanf("%f %f", &num1, &num2);
		
		if(operator=='Q'){
			printf("Program has been ended");
			break;
		}		
		
		switch(operator){
			case '+':
				result = num1 + num2;
				printf("%.2f + %.2f = %.2f\n", num1, num2, result);
				break;
			case '-':
				result = num1 - num2;
				printf("%.2f - %.2f = %.2f\n", num1, num2, result);
				break;
			case '*':
				result = num1 * num2;
				printf("%.2f * %.2f = %.2f\n", num1, num2, result);
				break;
			case '/':
				if(num2!=0){
					result = num1 / num2;
					printf("%.2f / %.2f = %.2f\n", num1, num2, result);
					
				}else{
					printf("Error: Division by 0 is not allowed\n ");
					
				}
				break;
			default:
				printf("Invalid operator, please try again!");		
			
		}	
			printf("\n");
		}			
		return 0;
	}

