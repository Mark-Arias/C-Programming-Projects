// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
// Check if a user generated password works according to specified criteria

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


// main //////////////////////////////////
int main()
{
    char word;
    int numChar=0;
    int numNumber=0;
    int count;
    printf ("Enter a string for password:");
    while((word = getchar())!= '\n')
    {
       if ((word >='a'&& word <= 'z') || (word >='A' && word <= 'Z'))
       {
           numChar += 1;
       }
        else if (isdigit(word))
       {
           numNumber += 1;
       }
        else
        {
            printf ("Your password can only contain digits and letters: \n");
        break;
        }
    }
    count = numNumber + numChar;
    if (count<8)
    {
        printf ("Your password must contain at least 8 charecters: \n");
    
    
    }
    else if (numNumber<2)
    {
        printf ("Your password must contain at least 2 digits: \n");
    }
       else
       {
           printf ("Your password is valid\n");
       }
    
        
            
           
system("pause");
return 0;
}
