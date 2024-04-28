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

        }

    }
}