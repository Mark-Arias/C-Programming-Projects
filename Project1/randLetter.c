#include <stdio.h>
// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
// Produce a rand letter based on the ascii value equivelant
int main()
{
	int i,asciiVal;
	srand(time(NULL));

	char randLetter = 'A' + rand()%(25-0+1);
	printf("%c\n",randLetter);

	system("pause");
	return 0;
}