#include <stdio.h>

int main()
{
	int n;
	float sum = 0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; ++i)
	{
		if (i != n)
			printf("1/%d + ",i);
		else
			printf("1/%d\n",i);

		sum += 1.0/i;
	}

	printf("The sum of the series= %f", sum);
}
