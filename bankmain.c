#include <stdio.h> 

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