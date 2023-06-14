#include<stdio.h>
// Write C program use switch statement. Display Monday to Sunday.

	int main(){
		char day;
		
		printf("Enter the day of the week: ");
		scanf("%c", &day);
		
		switch(day){			
			case 'm':
				printf("Monday");
				break;
			case 't':
				printf("Tuesday");
				break;
			case 'w':
				printf("Wednesday");
				break;
			case 'T':
				printf("Thursday");
				break;
			case 'f':
				printf("Friday");
				break;
			case 's':
				printf("Saturday");
				break;
			case 'S':
				printf("Sunday");
				break;
			default:
				printf("Invalid! Input");				
		}
		
			return 0;
		}
