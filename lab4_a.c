#include <stdio.h>

int main()
{
	int i = 1, fact;
	printf("The numbers whose factorials are between 5000 and 32565 are: ");

	while (1)
	{
		fact = 1;

		for (int j = i; j > 1; --j)
			fact *= j;

		if (fact > 32565)
			break;

		if (fact > 5000 && fact < 32565)
			printf("%d ", i);

		++i;
	}
}
