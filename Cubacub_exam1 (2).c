#include <stdio.h>

/*Biodata code by Amber Clarisse M. Cubacub
Date Started: 09-22-21
Date Finished: 09-22-21
Description: This code will calculate 2 numbers with sum, difference, product, quotient, and remainder*/

int main() {
	//declaring variables
	int num1, num2, sum, diff, product, quo, remain;
	
	printf("\nEnter first number: "); //entering first number
	scanf("%d", &num1);
	
	printf("\nEnter second number: "); //entering second number
	scanf("%d", &num2);
	
	//entering the variable arithmetic
	sum = num1 + num2;
	diff = num1 - num2;
	product = num1 * num2;
	quo = num1 / num2;
	remain = num1 % num2;
	
	//answers in getch function
	printf("\n%d + %d = %d", num1, num2, sum); getch();
	printf("\n%d - %d = %d", num1, num2, diff); getch();
	printf("\n%d * %d = %d", num1, num2, product); getch();
	printf("\n%d / %d = %d", num1, num2, quo); getch();
	printf("\nThe remainder of %d/%d is %d", num1, num2, remain); getch();
}
