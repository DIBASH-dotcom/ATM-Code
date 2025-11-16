#include<stdio.h>

int main() {
    int option;
    float balance = 0, amount;

    while(1) {   
        printf("\n===== BANK MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch(option) {

            case 1:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if(amount <= 0) {
                    printf("Invalid amount\n");
                } else {
                    balance += amount;
                    printf("Amount Deposited Successfully\n");
                }
                break;

            case 2:
                printf("Enter withdraw amount: ");
                scanf("%f", &amount);
                if(amount <= 0) {
                    printf("Invalid amount\n");
                }
                else if(amount > balance) {
                    printf("Insufficient Balance\n");
                }
                else {
                    balance -= amount;
                    printf("Withdraw Successful\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("	Thankyou  Goodbye\n");
                return 0;

            default:
                printf("Invalid Option Please choose again.\n");
        }
    }
}
