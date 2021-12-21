#include <stdio.h>
#include <stdlib.h>

/*Biodata code by Amber Clarisse M. Cubacub
Date Started: 09-09-21
Date Finished: 09-09-21
Description: This will display the biodata information using the scanf function and system cls*/

int main() {
	//declaring the variables first
	char firstname[20], secondname[20], middlename[20], lastname[20], address[100]; 
	char email[40], parentfname[20], parentlname[20], parentfname2[20], parentlname2[20], occupation[50], occupation2[50];
	int age;
	
	//Whole bio data using the scanf program
	printf("\t\t\t\t\tBio Data About Me \n"); 
	printf("\t\t\t\t\tFirst Name:");
	scanf("%s", &firstname);
	printf("\t\t\t\t\tSecond Name:");
	scanf("%s", &secondname);
	printf("\t\t\t\t\tMiddle Name:");
	scanf("%s", &middlename);
	printf("\t\t\t\t\tLast Name:");
	scanf("%s", &lastname);
	printf("\t\t\t\t\tAddress:");  
	scanf("%s", &address);  
	printf("\t\t\t\t\tAge:"); 
	scanf("%d",&age);
	printf("\t\t\t\t\tEmail Address:"); 
	scanf("%s", &email); 
	printf("\t\t\t\t\tEnter Father's First Name:");
	scanf("%s", &parentfname);
	printf("\t\t\t\t\tEnter Father's Last Name:");
	scanf("%s", &parentlname);
	printf("\t\t\t\t\tOccupation:"); 
	scanf("%s", &occupation);
	printf("\t\t\t\t\tEnter Mother's First Name:");
	scanf("%s", &parentfname2);
	printf("\t\t\t\t\tEnter Mother's Last Name:");
	scanf("%s", &parentlname2); 
	printf("\t\t\t\t\tOccupation:"); 
	scanf("%s", &occupation2); 

	//makes another window via system("cls");
	system("cls");
	
	printf("\t\t\t\t\tName: %s %s %s %s\n", firstname, secondname, middlename, lastname); getch();
	printf("\t\t\t\t\tAddress: %s\n", address); getch();
	printf("\t\t\t\t\tAge: %d\n", age); getch();
	printf("\t\t\t\t\tEmail Address: %s\n", email); getch();
	printf("\t\t\t\t\tFather: %s %s\n", parentfname, parentlname); getch();
	printf("\t\t\t\t\tOccupation: %s\n", occupation); getch();
	printf("\t\t\t\t\tMother: %s %s\n", parentfname2,parentlname2); getch();
	printf("\t\t\t\t\tOccupation: %s\n", occupation2); getch();
}
