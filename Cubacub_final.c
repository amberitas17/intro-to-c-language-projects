/*ATM program code by Amber Clarisse M. Cubacub
Date Started: 12-04-21
Date Finished: 12-05-21
Description: ATM Function Using Function Pointers*/
#include<stdio.h>
#include<stdlib.h>
//declaring functions
void menu(int *choice);
void initial(float *currbal);
void deposit(float *currbal);
void withdraw(float *currbal);
void checkbalance(float currbal);
main(){	
	//declaring variables
	int choice;
	float currbal;
	menu(&choice);//declaring the menu with the choice
	//looping the choices
	while(choice <=5){
		switch (choice) {
          	case 1:
             	initial(&currbal);
             	menu(&choice);
             	break;
           	case 2:
             	deposit(&currbal);
             	menu(&choice);
             	break;
           	case 3:
           		withdraw(&currbal);
             	menu(&choice);
             	break;
           	case 4:
           	 	checkbalance(currbal);
				menu(&choice);
				break;
			case 5:
				printf("Thank you for using our program");
				exit(0);
				break;
           	default:
             	printf("invalid Choice");
             	menu(&choice);
             	break;
       }
    }
}
//the menu for choice function
void menu(int *choice){
	printf("\n[1] Initialize \n");
	printf("[2] Deposit\n");
	printf("[3] Withdraw\n");
	printf("[4] Display\n");
	printf("[5] Exit\n");
	printf("[Developed by: Amber Clarisse Cubacub]\n");
	printf("[Final Project in CCS 2-E]");
	printf("\nSelect your transaction: \n\n");
	scanf("%d", &*choice);
	return;
}
//initialize function
void initial(float *currbal){
	printf("Input an amount: \n");
	scanf("%f", &*currbal);//currbal will store it's input
	printf("\nYour balance is Php %.2f\n", *currbal);
	return;//this will return the function call
}
//deposit
void deposit(float *currbal){
	float depositAmount;
    printf("Enter an amount you would like to deposit: ");
    scanf("%f", &depositAmount);
    *currbal += depositAmount;//the currbal was stored in the initialize function
    printf("\nYour balance is Php %2.f\n", *currbal);
    return;//this will return the function call
}
//withdraw
void withdraw(float *currbal){
	float withdrawAmount;
	printf("Enter the amount you would like to withdraw: ");
	scanf("%f", &withdrawAmount);
	*currbal -= withdrawAmount;//the currbal was stored in the initialize function
	printf("\nYour remaining balance is Php %.2f \n", *currbal);
	if (*currbal<withdrawAmount){
		printf("Sorry, you do not have enough balance. Please try again. . . \n");
	}
	return;
}
//displaying the balance
void checkbalance(float currbal){
	printf("Your current balence is: %.2f\n", currbal);
	return;
}
