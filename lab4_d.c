#include <stdio.h>

int main()
{
	int i, j;
	printf("Pattern1 : \n");

	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= i; ++j)
		       printf("* ");
		printf("\n");
	}

	printf("\nPattern2: \n");

	for (i = 1; i <= 10; ++i)
	{
		for (j = 10; j >= i; --j)
			printf("* ");
		printf("\n");
	}

	printf("\nPattern3: \n");

	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			if (j >= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	printf("\nPattern4: \n");

	for (i = 1; i <= 10; ++i)
	{
		for (j = i; j < 10; ++j)
			printf(" ");

		for (j = 1; j <= i; ++j)
			printf("*");

		printf("\n");
	}
}	

