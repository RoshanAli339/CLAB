#include <stdio.h>

int main()
{
	int n, pcount = 0, ncount = 0, sum = 0;
	printf("Enter '0' to stop!\n");
	do
	{
		printf("Enter a number: ");
		scanf("%d", &n);

		if (n > 0)
			pcount ++;
		else if (n < 0)
			ncount ++;
		sum += n;
	}
	while (n != 0);

	printf("The number of positive numbers= %d\n",pcount);
	printf("The number of negative numbers= %d\n",ncount);
	printf("The sum of all numbers= %d\n",sum);
}
