#include <stdio.h>
#include <stdlib.h>

/*Biodata code by Amber Clarisse M. Cubacub
Date Started: 09-20-21
Date Finished: 09-20-21
Description: This will display the cash register and the arithmetic symbols*/

int main(void) {
	
	//declaring the variables needed
	char firstname[20];
	char lastname[20];
    float total;
    float Item1,Item2,Item3,Item4,Item5;
    float change;
    float payment;
    
    //this will display the cash register assigning the cost
	printf("\t\t\t\t\tCash Register \n"); 
	
	printf("Enter your first name: ");
    scanf("%s", &firstname);
    printf("\nEnter your last name: ");
    scanf("%s", &lastname);

	printf("\nEnter Cost of Item 1: ");
	scanf("%f", &Item1);
	
	printf("\nEnter Cost of Item 2: ");
	scanf("%f", &Item2);

	printf("\nEnter Cost of Item 3: ");
	scanf("%f", &Item3);

	printf("\nEnter Cost of Item 4: ");
	scanf("%f", &Item4);
	
	printf("\nEnter Cost of Item 5: ");
	scanf("%f", &Item5);
	
	total = Item1 + Item2 + Item3 + Item4 + Item5; //adding all the total age
	
	//this will clear the system
	system("cls");
	
	//the summary receipt 
	printf("Name: %s %s\n", firstname, lastname);getch(); 
	
	printf("Item 1: %.2f\n", Item1); 
	printf("Item 2: %.2f\n", Item2);
	printf("Item 3: %.2f\n", Item3);
	printf("Item 4: %.2f\n", Item4);
	printf("Item 5: %.2f\n", Item5); getch();
	printf("\n Total: %.2f", total);
	
	//entering the cash needed
	
	printf("\n Enter Cash received: ");
	scanf("%f", &payment);
	
	change = payment-total; //minus all the cash needed and the total
	
	printf("\n Change: %.2f", change);getch();//displaying the change
	
}
