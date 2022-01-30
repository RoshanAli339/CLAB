#include <stdio.h>

int main()
{
	int n, sum = 0, fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for (int temp = n; temp > 0; temp /= 10)
	{	
		fact = 1;
		for (int i = temp % 10; i > 1; --i)
			fact *= i;
		sum += fact;
	}

	if (sum == n)
		printf("%d is a Strong number!\n",n);
	else
		printf("%d is not a Strong number!\n",n);
}
