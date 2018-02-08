// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
//this is the file processing program

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//main /////////////////////

int main()
{
	char name [10];
	char ssn [11];
	int quiz,midterm,assignment,participation,final,total; 
	FILE * infile;
	FILE * outfile;
	outfile = fopen("RESULT.txt", "w");
	infile = fopen("DATA.txt","r");
	if (infile==NULL)
	{
		printf ("file does not exist\n");
		exit(0);
	}
	while (fscanf(infile,"%10s %11s %d %d %d %d %d", name,ssn,&quiz,&midterm,&assignment,&participation,&final)!=EOF)
	{
		total = quiz*.15 + midterm*.15 + assignment*.40 + participation*.10 + final*.20;
		if (total>=90)
		{
			printf ("%s's grade is A. %s's SSN is %11s \n",name,name,ssn);
		}
		else if (total>=80)
		{
			printf ("%s's grade is B. %s's SSN is %11s \n",name,name,ssn);
		}
		else if (total>=70)
		{
			printf ("%s's grade is C. %s's SSN is %11s \n",name,name,ssn);
		}
		else if (total>=60)
		{
			printf ("%s's grade is D. %s's SSN is %11s \n",name,name,ssn);
		}
		else 
		{
			printf ("%s's grade is F. %s's SSN is %11s \n",name,name,ssn);
		}
			
		
		fprintf (outfile, "%s your total is %d. SSN: %11s \n",name,total,ssn);
	}
	fclose(outfile);
	fclose (infile);
	
    	
}