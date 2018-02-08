// Asignment 2 
// Arias Mark 10/2/16
// CS50 Tuesday/Thursday

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//This program converts a user entered telephone number to all numeric digits.
//Program can accept lower and uppercase letter input.

int main()
{
	char telephoneNum[100];
	int i;
	
	
	
	printf("Enter a telephone Number:\n");
	gets(telephoneNum);

	for(i = 0; telephoneNum[i] != '\0'; ++i )
	{

		if(telephoneNum[i] >= 'A'  && telephoneNum[i] <= 'C' || telephoneNum[i] >='a' && telephoneNum[i] <= 'c')
		{
			telephoneNum[i] = '2';	
		}
	
		else if(telephoneNum[i] >= 'D'  && telephoneNum[i] <= 'F' || telephoneNum[i] >='d' && telephoneNum[i] <= 'f')
		{
			telephoneNum[i] = '3';	
		}	
		
		else if(telephoneNum[i] >= 'G'  && telephoneNum[i] <= 'I' || telephoneNum[i] >='g' && telephoneNum[i] <= 'i')
		{
			telephoneNum[i] = '4';	
		}		

		else if(telephoneNum[i] >= 'J'  && telephoneNum[i] <= 'L' || telephoneNum[i] >='j' && telephoneNum[i] <= 'l')
		{
			telephoneNum[i] = '5';	
		}	
		else if(telephoneNum[i] >= 'M'  && telephoneNum[i] <= 'O' || telephoneNum[i] >='m' && telephoneNum[i] <= 'o')
		{
			telephoneNum[i] = '6';	
		}	
		else if(telephoneNum[i] >= 'P'  && telephoneNum[i] <= 'R' || telephoneNum[i] >='p' && telephoneNum[i] <= 'r')
		{
			telephoneNum[i] = '7';	
		}	
		else if(telephoneNum[i] >= 'S'  && telephoneNum[i] <= 'U' || telephoneNum[i] >='s' && telephoneNum[i] <= 'u')
		{
			telephoneNum[i] = '8';	
		}
		else if(telephoneNum[i] >= 'V'  && telephoneNum[i] <= 'Z' || telephoneNum[i] >='v' && telephoneNum[i] <= 'z')
		{
			telephoneNum[i] = '9';	
		}		
	}

	puts(telephoneNum);

	system("pause");
	return 0;
}