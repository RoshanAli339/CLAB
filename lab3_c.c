#include <stdio.h>
#include <math.h>

int main()
{
	float x, val, sum = 0;
	int fact, c = 0, i = 1 ;
	printf("Enter the value of x: ");
	scanf("%f", &x);

	x = x * ((22.0/7)/ 180);

	while (1)
	{
		fact  = 1;
		for (int j = c; j > 1; --j)
			fact *= j;
		val = pow(x, c) / fact;

		if (val < 0.1E-5)
			break;
		
		if (i % 2 != 0)
			sum += val;
		else
			sum -= val;

		i++;
		c+=2;
	}

	printf("Cosine of %f = %f\n",x, sum);
}
