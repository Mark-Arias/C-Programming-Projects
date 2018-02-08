// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
//this program parses strings depending on the size and even or oddness of the string

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//main /////////////////////////////

int main()
{
    char string[200];
    char p;
    int i=0;
    int k=0;
    int j=0;
    printf ("Please enter a string: \n");
    printf("This program will parse it in two: \n");
    while ((p=getchar())!='\n')
    {
        string[i++]=p;
    }
   if ((i%2)==0)
   {
       j=(i/2);
       for (k=0;k<j;k++)
       {
           printf("%c",string[k]);
       }
       printf ("\n");
       for (k=j;k<=i;k++)
       {
           printf("%c",string[k]);
       }
       printf("\n");
   }
    else
    {
        j=(i/2)+1;
        for (k=0;k<j;k++)
        {
            printf("%c",string[k]);
        }
        printf("\n");
        for (k=j;k<=i;k++)
        {
            printf("%c",string[k]);
        }
        printf("\n");
    }
    
       
       
    return 0;
}
