#include<stdio.h>
	int main(){
		int choise,qty,rate,total;
		
		printf("Welcome to the bauty store!\n");
		printf("1. Face care\n");
		printf("2. Body care\n");
		printf("3. Hair care\n");
		printf("4. Healthy drinks\n\n");
		
		printf("Please select a product..");
		scanf("%d", &choise);
		
		switch(choise){
			case 1:
				printf("1. Face packs  - Rs.499/-\n");
				printf("2. Face Washes - Rs.599/-\n");
				printf("3. Face Creams - Rs.299/-\n\n");
				
				printf("Select want to buy..");
				scanf("%d", &choise);			
				
				
				switch(choise){
					case 1:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=499;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 2:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=599;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 3:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=299;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;	
						default:
                		printf("Invalid choice. Please try again.\n");				
				}
				break;
			case 2:
				printf("1. Body Lotions - Rs.405/-\n");
				printf("2. Body Soaps   - Rs.105/-\n");
				printf("3. Body Washes  - Rs.240/-\n\n");
				
				printf("Select want to buy..");
				scanf("%d", &choise);			
				
				
				switch(choise){
					case 1:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=405;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 2:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=105;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 3:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=240;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						default:
                		printf("Invalid choice. Please try again.\n");					
					}
					break;
			case 3:
				printf("1. Hair Shampoo      - Rs.240/-\n");
				printf("2. Hair Conditioners - Rs.150/-\n");
				printf("3. Hair Olis   	     - Rs.360/-\n");
				printf("4. Hair Gel  	     - Rs.295/-\n\n");
				
				printf("Select want to buy..");
				scanf("%d", &choise);			
				
				
				switch(choise){
					case 1:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=240;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 2:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=150;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 3:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=360;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
					case 4:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=295;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						default:
                		printf("Invalid choice. Please try again.\n");						
				}
				break;
			case 4:
				printf("1. Green Tea            - Rs.295/-\n");
				printf("2. Trimfit Tea          - Rs.900/-\n");
				printf("3. Seabuckthron Bioship - Rs.100/-\n\n");
				
				printf("Select want to buy..");
				scanf("%d", &choise);			
				
				
				switch(choise){
					case 1:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=295;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 2:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=900;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;
						
					case 3:
						printf("Select the Nos. of quantity..\n");
						scanf("%d", &qty);
						rate=100;
						total=rate*qty;
						printf("Your order is received!\nCurrent Total: %d\n\n", total);
						printf("Thank you for shopping with us!");
						break;					
					}
					default:
                		printf("Invalid choice. Please try again.\n");
		}
		return 0;
	}
