#include <stdio.h>

int main()
{
	int n, sum = 0;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	
	for(int i = 1,val = 1; i <= n; ++i, val += 2)
	{
		if (i % 2 != 0)
			sum += val;
		else
			sum -= val;
	}

	printf("The sum of the series= %d\n", sum);
}
