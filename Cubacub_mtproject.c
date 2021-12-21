/*Convert numbers to word from 1-1000 code by Amber Clarisse M. Cubacub
Date Started: 10-11-21
Date Finished: 10-14-21
Description: This will convert numbers 1-1000 to words*/

#include <stdio.h>
#include<stdlib.h>

main()
{
	//declare the variables
    int a, b, c, d, e, f, num;
    
    printf("\t\t\tAmber's Numbers\n");
    printf("\t\tC language program by Amber Clarisse Cubacub\n\n");

    printf("Enter number 1 to 1000: "); //input the numbers here
    scanf("%d",&num);
    
    //if the number is out of range, this part will display using if-else
    
    if (num>1000){
    	printf("We cannot accept higher than 1000. Please try again");
    	return(0);
}
	else if (num<0){
    	printf("We cannot accept lower than 1000. Please try again");
    	return(0);
    }
    
/* this will declare the variable for getting the switch cases...
	a = num / 1000 <---- num will divide by one thousand and the quotient will get on the b and will get on the switch code for 1000
	b = num % 1000 <---- the remainder when dividing 1000 and the remainder will get to c
	c = b / 100 <---- the remainder from b will divide by 100 and the quotient will get the hundreds switch code
	d = b % 100 <---- the remainder when dividing 100 and the remainder will get to e
	e = d / 10 <---- the remainder from d will divide by 10 and the quotient will get the tens switch code
	f = d % 100 <---- the remainder when dividing 10 and the remainder will get the ones switch code*/	
	
	a = num / 1000;
	b = num % 1000;
	c = b / 100;
	d = b % 100;
	e = d / 10;
	f = d % 10;
	
  	//this switch code will get the one thousand from the a = num / 1000
    switch(a){
    case 0: break;
    case 1: printf("one thousand");break;
  }
	//this switch code will get the hundreds from the c = b / 100
    switch(c) {
	case 0: break;
	case 1: printf("one hundred");break;
	case 2: printf("two hundred");break;
	case 3: printf("three hundred");break;
	case 4: printf("four hundred");break;
	case 5: printf("five hundred");break;
	case 6: printf("six hundred");break;
	case 7: printf("seven hundred");break;
	case 8: printf("eight hundred");break;
	case 9: printf("nine hundred"); break;
}
	/*this switch code will get the tens from 10-90 using e = d / 10 and f = d % 10, the switch(e)
	will get the 20-90 and inside the switch (e) case 1, will get another switch code for 10-19 using f= d % 10
	the case 1 in switch (e) will be reserved for other tens from 10-19 but it will get subsitute of f = d%10*/
	switch(e)
	{
	case 1: switch(f)
            {
                case 0: printf(" ten");break;   
                case 1: printf(" eleven");break;
                case 2: printf(" twelve");break;
                case 3: printf(" thirteen");break;
                case 4: printf(" fourteen");break;
                case 5: printf(" fifteen");break;
                case 6: printf(" sixteen");break;
                case 7: printf(" seventeen");break;
                case 8: printf(" eighteen");break;
                case 9: printf(" nineteen");break;
            }
			break;                                    
    case 2: printf(" twenty");break;
    case 3: printf(" thirty");break;
    case 4: printf(" fourty");break;
    case 5: printf(" fifty");break;
    case 6: printf(" sixty");break;
    case 7: printf(" seventy");break;
    case 8: printf(" eighty");break;
    case 9: printf(" ninety");break;
}
/*this switch code will get the ones from 1-9 using e = d / 10 and f = d % 10, the if(e !=1) code will 
determine if the quotient of e = num / 10 is not equal to one to get into the switch (f) f= num %10*/
	if(e != 1){
	switch(f){
	case 1: printf(" one");break;
	case 2: printf(" two");break;
    case 3: printf(" three");break;
	case 4: printf(" four");break;
	case 5: printf(" five");break;
	case 6: printf(" six");break;
    case 7: printf(" seven");break;
	case 8: printf(" eight");break;
    case 9: printf(" nine");break;
         }
    }
    printf("\n\n\n\nThank you for entering the number");
}
