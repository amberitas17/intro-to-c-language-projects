#include <stdio.h>

/* This program will calculate two numbers using if-else
 Name of Programmer: Amber Clarisse Cubacub
 Date Created : September 30, 2021
 Date Finished : September 30, 2021
*/

int main() {
	//declaring variables
	int x, y, ans, remain;
	char opt;
	
	printf("Select your operation below: \n"); /* displays the main menu */
	printf("[A] Add\n");
	printf("[S] Subtraction\n");
	printf("[M] Multiplication\n");
	printf("[D] Division\n\n");
	printf("Choice: ");
	scanf("%c",&opt);/* choice is a variable to store the input of the user */
	
	if (opt=='A'||opt=='a'){
	//if the user will choose addition operation
	printf("\n\nEnter first number: ");
	scanf("%d",&x);
	printf("\n\nEnter second number: ");
	scanf("%d",&y);
	ans= x + y; //entering the variable arithmetic
	printf("\n Sum of x and y: %d", ans); //showing the answer
 }
 else if (opt=='S'||opt=='s'){
 	//if the user will choose subtraction operation
	printf("\n\nEnter first number: ");
	scanf("%d",&x);
	printf("\n\nEnter second number: ");
	scanf("%d",&y);
	ans = x-y; //entering the variable arithmetic
	if (x>=y){
			//if x is greater than y, the answer will show
			printf("\nDifference of x and y: %d", ans);
		}
		else if (x<y){
			//if x is less than y, it will show error message and goes back to the main function to repeat
			printf("Invalid entry. Please try again\n\n");
			getch();
			main();
		}
	}
 else if (opt=='M'||opt=='m'){
 	//if the user will choose multiplication operation
	printf("\n\nEnter first number: ");
	scanf("%d",&x);
	printf("\n\nEnter second number: ");
	scanf("%d",&y);
	ans= x * y; //entering the variable arithmetic
	printf("\n Product of x and y: %d", ans); //showing the answer
 }
 else if (opt=='D'||opt=='d'){
 	//if the user will choose division operation
	printf("\n\nEnter first number: ");
	scanf("%d",&x);
	printf("\n\nEnter second number: ");
	scanf("%d",&y);
	ans= x/y; //entering the variable arithmetic
	remain= x%y; //entering the variable arithmetic
	printf("\n Quotient of x and y: %d", ans); //showing the answer
	printf("\n Remainder of x and y: %d", remain); //showing the remainder
 }
 else {
	printf("The choice operation you entered is invalid!");
	printf("\nPlease enter the correct choice again! Thank You!!");
	main(); /* call to go back to function main to repeat the transaction */
 }
 getch();
 return 0; /* indicates program ended successfully */
}
