#include <stdio.h>

int main()
{
	int a = 0, b = 1, c = 1, d, n;
	printf("Enter the number of terms of the Tribonacci series you want to print: ");
	scanf("%d", &n);
	
	printf("The series is as follows: ");

	if (n == 1)
		printf("%d", a);
	else if (n ==2)
		printf("%d %d", a, b);
	else if (n == 3)
		printf("%d %d %d", a, b, c);
	else
	{
		printf("%d %d %d ", a, b, c);

		for (int i = 4; i <= n; ++i)
		{
			d = a + b + c;
			printf("%d ", d);

			a = b;
			b = c;
			c = d;
		}
	}
	printf("\n");
}

