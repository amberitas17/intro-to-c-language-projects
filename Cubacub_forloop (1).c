/*Sum of all 2 input numbers code by Amber Clarisse M. Cubacub
Date Started: 11-05-21
Date Finished: 11-05-21
Description: This will get all the sum from 1st to 2nd number and even and odd using for loop*/

#include <stdio.h>

main() {
	//declare the variables
	int x,a,b,c, input1, input2,sum=0, sum1=0, sum2=0;
	
	printf("Enter 1st number: ");
	scanf("%d", &input1);
	printf("Enter 2nd number: ");
	scanf("%d", &input2);
	
	//this will get sum from between the numbers of input1 and input2
	for (x=input1;x<=input2; x++){
		if (input1<input2){
		sum+=x;
		}
	}
	//this will get sum from between the odd and even numbers of input1 and input2
	for(a = input1; a <= input2; a++){
			/*this will get sum from between even numbers of input1 and input2 ...
			c= a%2 will determine where are the even numbers between input1 and input2
			*/
			c = a % 2;
			if (c==0){
				sum1+=a;
			}
			//this will get sum from between odd numbers of input1 and input2
			else{
				sum2+=a;
			}
		}
	printf("\nSum of all numbers between %d to %d: %d \n",input1,input2, sum);
	printf("\n\nThe sum of all the even numbers from %d to %d: %d\n",input1, input2, sum1);
	printf("\n\nThe sum of all the odd numbers from %d to %d: %d\n",input1, input2, sum2);
}
