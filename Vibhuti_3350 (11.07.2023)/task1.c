//1.WAP to create infinite calc using UDF, switch case and Loop.

#include<stdio.h>

int sum(int a, int b){
	
	printf("Sum : %d\n", a+b);
}

int sub(int a, int b){
	
	printf("Sub : %d\n", a-b);
}

int multi(int a, int b){
	
	printf("Multi : %d\n", a*b);
}

int div(int a, int b){
	
	printf("Div : %d\n", a/b);
}

int modual(int a, int b){
	
	printf("Mod : %d\n", a%b);
}

int deflt(){
	
	printf("Invalid operator!, please try again\n");
}

int main(){
	
	int num1, num2;
	char optr;
	
	s: while(1){	
	
	printf("Select any one operator from (+, -, *, /, %) or for quit select 'Q': ");
	scanf(" %c", &optr);
	
	if(optr=='Q'){
		printf("Program has been ended");
		break;		
	}
	
	if(optr!='+' && optr!='-' && optr!='*' && optr!='/' && optr!='%'){
		deflt();
		goto s;	
	}	
	
	printf("Enter the numbers: ");
	scanf("%d %d", &num1, &num2);
	
	
	switch(optr){
		
		case '+':
			sum(num1, num2);
			break;
			
		case '-':
			sub(num1, num2);
			break;
			
		case '*':
			multi(num1, num2);
			break;
			
		case '/':
			if(num2==0){
				printf("Error: Division by 0 is not allowed\n");				
			}
			else{
				div(num1, num2);				
			}
			break;
			
		case '%':
			modual(num1, num2);
			break;
			
		default : 
			deflt();
							
		}
		
		printf("\n");			
	}
	
	return 0;	
}
