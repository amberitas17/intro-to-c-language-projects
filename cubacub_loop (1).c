/*ATM program code by Amber Clarisse M. Cubacub
Date Started: 11-14-21
Date Finished: 11-16-21
Description: ATM program code using do...while loop*/
#include <stdio.h>
#include <stdlib.h>

main() {
	//declare the variables
	int choice; 
	float amount=0.00, balance;
	//the first do while loop code will enter the main menu
	do{
		printf("\n[1] Initialize \n");
		printf("[2] Deposit\n");
		printf("[3] Withdraw\n");
		printf("[4] Display\n");
		printf("[5] Exit\n");
		printf("[Developed by: Amber Clarisse Cubacub]");
		printf("\nSelect your transaction: \n\n");
		scanf("%d", &choice);
		
		//the nested do while loop for the main menu and if the number entered is invalid, it will loop the program
		do{
			//CHOICE 1 will show the Intialize Choice Menu
			if(choice==1){
				printf("Input an amount: \n");
				scanf("%f", &amount);
				balance=amount;
				printf("\nYour balance is Php %.2f\n", balance);
				break;
			}
			//CHOICE 2 will show the Deposit Choice Menu
			else if(choice==2){
				printf("Enter amount to deposit: \n");
				scanf("%f", &amount);
				balance+=amount; 
				printf("\nYour new balance is Php %.2f \n", balance);
				break;
			}
			//CHOICE 3 will show the Withdraw Choice Menu
			else if(choice==3){
				printf("Enter amount to withdraw: \n");
				scanf("%f", &amount);
				balance-=amount;
				printf("\nYour remaining balance is Php %.2f \n", balance);
					//if the remaining balance is 0 and you want to withdraw more, this will enter the error
				 	if (balance<0){
						printf("Sorry, you do not have enough balance. Please try again. . . \n");
						getch();
						break;
					}
				break;
			}
			//CHOICE 4 will show the Display Choice Menu
			else if(choice==4){
				printf("Your available balance is %.2f\n",balance);
				break;
			}
			//CHOICE 5 will exit the program
			else if(choice==5){
				printf("Thank you for using our program\n");
				exit(0);
			}
			//if the program entered is invalid, this will show
			else{
				printf("\nInvalid Entry... Please try again\n");
				break;
			}
			//the while loop will represent if the choice entry is correct
		}while(choice==1||choice==2||choice==3||choice==4||choice==5);
//the while loop will represent if the choice entry is incorrect
}while(choice!=1||choice!=2||choice!=3||choice!=4||choice!=5);
}
