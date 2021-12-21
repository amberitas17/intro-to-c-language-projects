/*Odd and Even program code by Amber Clarisse M. Cubacub
Date Started: 12-04-21
Date Finished: 12-05-21
Description: Odd and Even Program using Functions: Parameter Passing and Returning Value*/
#include<stdio.h>
//declaring functions
int input(void);
void even(int);
void odd(int);
//main function for displaying the odd and even numbers
main(){
	int x;	
	
	x = input();
	even(x);
	odd(x);	
}
//function for inputting a number then returning the int num
int input(void){
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	return num;
}
//the function to display even numbers in ascending order from 1 to n
void even(int y)
{
	int n;
	printf("\nEven Numbers:");
	//for loop to display the even numbers in ascending order
 	for(n=2;n<=y;n+=2){
    printf(" %d",n);
  }
  return;//this will return the function call
}
// function to display the odd numbers in descending order from n to 1
void odd(int b){
	int c;
	printf("\nOdd Numbers:");
	//for loop to display the odd numbers in descending order
	for(c=b;c>=0;c--){
		//determining if the numbers are odd
		if (c % 2 != 0){
			printf(" %d",c);
		}
	}
	return;//this will return the function call
}
