#include <stdio.h>

// Arias, Mark Steven CS50 Dehkhoda tth 
// Program Purpose
// draw an asterisk square given user input containing size dimensions
int main()
{

	 int n = 0;

	 printf("Please enter an integer:\n");
	 scanf("%d",&n);
//dont forget that you need to specify read in type in c to int
	for(int i = 0; i < n;i++)
	{
		for(int j = 0;j < n; j++)
		{
			if(i == 0||i == n-1)
			{
				printf("*");
			}
			else if(j == 0||j ==n-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
