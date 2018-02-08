#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
//This program shifts an array by a user specified amount left/right
//Uses malloc for dynamic memory allocation
//used rand fn to generate vals to populate dynamic array


//Function Protype Declarations /////////////////////////////
int* shift(int *array, int num, char shiftDir, int shiftVal);


// Main Body of Code /////////////////
int main()
{
	int num = 0;
	printf("How many memory cells to allocate? :");
	scanf("%d",&num);

	char shiftDir = 'L';
	//printf("Shift array left or right?\n");
	//scanf("%c",&shiftDir);
    //had an issue with this part of the code
	int shiftVal = 0;
	printf("\nArray Shift Value?\n");
	scanf("%d",&shiftVal);

	//Array creation //////////////////////////////
	  int *array = malloc (sizeof (int) * num);
    printf("Dyamically generated Array: ");
    srand(time(NULL));
    
    for (int i = 0; i < num; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");
    
    int *output = shift(array, num, shiftDir, shiftVal);
    printf("The elements of your shifted array: ");
    
    for (int i = 0; i < num; i++) {
        printf("%d ", output[i]);
    }
    printf("\n");




    free(array);
	system("pause");
	return 0;
}

//Function Section ////////////////////////////////

int* shift(int *array, int num, char shiftDir, int shiftVal)
{
	int *output = malloc (sizeof (int) * num);
    
    int start;
    
    if (shiftDir == 'R') 
    {
        start = num - shiftVal;
    } 
    else if (shiftDir == 'L')
     {
        start = shiftVal;
    }
    
    int outputI = 0;
    for (int i = start; i < num; i++) {
        output[outputI] = array[i];
        outputI++;
    }

    for (int i = 0; i < start; i++) {
        output[outputI] = array[i];
        outputI++;
    }
    
    return output;

}