// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
//this is the program that sorts around the number 3

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//main ////////////////////

 int main ()
{
 int arrayPrime[150];
 int arrayBeta[150];
int i;
 int size;
 int theta=0;

 printf ("what is the size of the array you want to create?\n");
 scanf ("%d",&size);
 
 printf("This program will priority sort for the number 3:\n");
 
 for (i=0;i<size;i++)
 {
	 printf ("type the number:");
	 scanf("%d",&arrayPrime[i]);
 }


for (i=0;i<size;i++)
{
	if (arrayPrime[i]==3)
	{
		arrayBeta[theta]=3;
		theta++;
		arrayBeta[theta]=4;
		theta++;
	    arrayBeta[theta]=5;
		theta++;
	}
	else if ((arrayPrime[i]!=4) && (arrayPrime[i]!=5))
	{
		arrayBeta[theta]=arrayPrime[i];
		theta++;
	}
	else ;
}

for (i=0;i<size;i++)   
{
	printf("%d",arrayBeta[i]);
	
}


return 0;
 }