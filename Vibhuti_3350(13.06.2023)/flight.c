#include <stdio.h>

int main() {
    int choice1, choice2, choice3;
    
    printf("Welcome to the flight booking system!\n");
    printf("Please choose your departure city:\n");
    printf("1. India\n");
    printf("2. Canada\n");
    printf("3. Germany\n");
    printf("4. New York\n");
    scanf("%d", &choice1);
    switch (choice1) {
        case 1:
            printf("You have chosen India.\n");
            break;
        case 2:
            printf("You have chosen Canada.\n");
            break;
        case 3:
            printf("You have chosen Germany.\n");
            break;
        case 4:
            printf("You have chosen New York.\n");
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }
    printf("Please choose your destination city:\n");
    printf("1. London\n");
    printf("2. Paris\n");
    printf("3. Tokyo\n");
    printf("4. Sydney\n");
    scanf("%d", &choice2);
    switch (choice2) {
        case 1:
            printf("You have chosen London.\n");
            break;
        case 2:
            printf("You have chosen Paris.\n");
            break;
        case 3:
            printf("You have chosen Tokyo.\n");
            break;
        case 4:
            printf("You have chosen Sydney.\n");
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }
    printf("Please choose your travel class:\n");
    printf("1. Economy\n");
    printf("2. Business\n");
    printf("3. First Class\n");
    scanf("%d", &choice3);
    switch (choice3) {
        case 1:
            printf("You have chosen Economy class.\n");
            break;
        case 2:
            printf("You have chosen Business class.\n");
            break;
        case 3:
            printf("You have chosen First Class.\n");
            break;
        default:
            printf("Invalid choice.\n");
            return 0;
    }
    printf("Booking successful!\n Thank you for choosing our flight booking system!\n");
    return 0;
}

