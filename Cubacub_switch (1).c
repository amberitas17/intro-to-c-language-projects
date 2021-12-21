/*Vowel and Consonant code by Amber Clarisse M. Cubacub
Date Started: 10-06-21
Date Finished: 10-06-21
Description: This will determine whether the letter is vowel or consonant*/

#include <stdio.h>

main() {
	//declaring the variable
	char letters;
	
	//entering the letter
	printf("Enter any Alphabet: ");
	scanf("%c", &letters);
	
	//switch case
	switch(letters)
	{
		//vowel cases
		case 'a': 
		case 'A': printf("Aa is a vowel\n");
				  break; //showing the answer
		case 'e':
		case 'E': printf("Ee is a vowel\n");
				  break;
		case 'i': 
		case 'I': printf("Ii is a vowel\n");
	              break;
		case 'o': 
		case 'O': printf("Oo is a vowel\n");break;
		case 'u': 
		case 'U': printf("Uu is a vowel\n");
				  break;
		//consonant cases
		case 'b': 
		case 'B': printf("Bb is a consonant\n");
				  break;
		case 'c': 
		case 'C': printf("Cc is a consonant\n");
				  break;
		case 'd': 
		case 'D': printf("Dd is a consonant\n");
				  break;
		case 'f': 
		case 'F': printf("Ff is a consonant\n");
				  break;
		case 'g': 
		case 'G': printf("Gg is a consonant\n");
				  break;
		case 'h': 
		case 'H': printf("Hh is a consonant\n");
				  break;
		case 'j': 
		case 'J': printf("Jj is a consonant\n");
				  break;	
		case 'k': 
		case 'K': printf("Kk is a consonant\n");
				  break;
		case 'l': 
		case 'L': printf("Ll is a consonant\n");
				  break;
		case 'm': 
		case 'M': printf("Mm is a consonant\n");
				  break;
		case 'n': 
		case 'N': printf("Nn is a consonant\n");
				  break;
		case 'p': 
		case 'P': printf("Pp is a consonant\n");
				  break;
		case 'q': 
		case 'Q': printf("Qq is a consonant\n");
				  break;
		case 'r': 
		case 'R': printf("Rr is a consonant\n");
				  break;
		case 's': 
		case 'S': printf("Ss is a consonant\n");
				  break;
		case 't': 
		case 'T': printf("Tt is a consonant\n");
				  break;
		case 'v': 
		case 'V': printf("Vv is a consonant\n");
				  break;
		case 'w': 
		case 'W': printf("Ww is a consonant\n");
				  break;
		case 'x': 
		case 'X': printf("Xx is a consonant\n");
				  break;	
		case 'y': 
		case 'Y': printf("Yy is a consonant\n");
				  break;	  
		case 'z': 
		case 'Z': printf("Zz is a consonant\n");
				  break;
		default: printf("Invalid input... Please try again\n");break; // Show error message if letters is not an alphabet
	}
}
