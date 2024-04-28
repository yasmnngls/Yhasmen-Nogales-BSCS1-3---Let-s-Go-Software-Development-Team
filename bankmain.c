#include <stdio.h> 

void checkBalance();
void moneyDeposit();
void moneyWithdrawal();

float accMoney = 0;
double depositMoney = 0;
double withdrawalAmount = 0;

int main (){

    int inputCheck; 
    int choice;

    do {
        printf("------------------------------------------------------\n");
		printf("\tWELCOME TO THE BANK OF THE PHILIPPINES!\n");
		printf("------------------------------------------------------\n");
        printf("\t1. ATM Deposit\t\n");
        printf("\t2. ATM Withdrawal\t\n");
        printf("\t3. ATM Balance\t\n");
        printf("\t4. Exit\t\n");
        printf("\tPlease enter your choice:\t");
            inputCheck = scanf("%d", &choice);
        if(inputCheck != 1) {
        	printf("\tInvalid Input! Please enter a valid choice (number).\n");
        	   while (getchar() != '\n');
		} else {
	
			switch (choice) {
            case 1:
                moneyDeposit();
                break;
            case 2:
                moneyWithdrawal();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
            	printf("\tThank you for using the Bank of the Phillipines. Have a good day!\n");
            	return 0;
            default:
                printf("\tInvalid choice, please try again.\n");
                while (getchar() != '\n');
             }
	        	printf("\n");

          } 
    
       } while (1);
	
	return 0;
}

void checkBalance() {
    printf("\tHello! Your current balance is: %.2lf\n", accMoney);
}

void moneyDeposit() {

    printf("\tEnter money you wish to deposit: ");
    if (scanf("%lf", &depositMoney) != 1 || depositMoney <= 0) {
        printf("\tTransaction Failed! Invalid input or amount must be greater than 0.\n");
        while (getchar() != '\n');  
    } else {
        accMoney += depositMoney;
        printf("\tTransaction Completed! Your updated balance is: %.2lf\n", accMoney);
    }
}

void moneyWithdrawal() {
    printf("\tEnter money you wish to withdraw: ");
    if (scanf("%lf", &withdrawalAmount) != 1 || withdrawalAmount <= 0 || withdrawalAmount > accMoney) {
        printf("\tTransaction Failed! Invalid input, amount must be greater than 0, or insufficient funds.\n");
        while (getchar() != '\n'); 
    } else {
        accMoney -= withdrawalAmount;
        printf("\tTransaction Completed! Your updated balance is: %.2lf\n", accMoney);
    }
}
