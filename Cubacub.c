#include <stdio.h>

/*Biodata code by Amber Clarisse M. Cubacub
Date Started: 09-02-21
Date Finished: 09-03-21
Description: This will display the biodata information using the intro to C and getch function*/

int main() {
	printf("\t\t\t\t\tBio Data About Me \n"); //this will display the title first
	printf("\t\t\t\t\tName:"); getch(); //this will display the title through enter button
	printf(" Amber Clarisse Murillon-Cubacub\n"); getch(); //this will display name through enter button next to the name
	printf("\t\t\t\t\tAddress:"); getch(); //this will display the title through enter button
	printf(" Calumpit, Bulacan\n"); getch(); //this will display the address through enter button next to the address 
	
	//the line will show after displaying the address by clicking enter button
	printf("=======================================================================================================================\n"); getch(); 
	printf("\t\t\t\t\tContact Information \n"); getch(); //this will display the title through enter button
	printf("\t\t\t\t\tContact No:"); getch(); //this will display the contact no. through enter button
	printf(" 09091404508\n"); getch(); //this will display the number through enter button next to the contact no.
	printf("\t\t\t\t\tEmail Address:"); getch(); //this will display the email address title through enter button
	printf(" amberclarisse0928@gmail.com\n"); getch(); //this will display the email add through enter button  next to the email address title
	
	//the next line will show after displaying the email address by clicking enter button
	printf("=======================================================================================================================\n"); getch();
	printf("\t\t\t\t\tFamily \n"); getch(); //this will display the title through enter button
	printf("\t\t\t\t\tFather:"); getch(); //this will display the father through enter button  
	printf(" Averill V. Cubacub\n"); getch(); //this will display the name of the father through enter button next to the Father:
	printf("\t\t\t\t\tOccupation:"); getch(); //this will display the occupation through enter button
	printf(" Government Employee\n"); getch(); //this will display the information through enter button next to the Occupation:
	printf("\t\t\t\t\tMother:"); getch(); //this will display the mother through enter button
	printf(" Cherry M. Cubacub\n"); getch(); //this will display the name of the mother through enter button next to the Mother:
	printf("\t\t\t\t\tOccupation:"); getch(); //this will display the occupation through enter button
	printf(" Unemployed\n"); getch(); //this will display the information through enter button next to the Occupation:
	
	//the next line will show after displaying the address by clicking enter button
	printf("=======================================================================================================================\n"); getch();
}
