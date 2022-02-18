#include <stdio.h>
#include <math.h>

void sort(int[], int);
float mean_calc(int[], int);
float median_calc(int[], int);
float variance_calc(int[], int);
float sd_calc(int[], int);

int main()
{
	int a[10],n, ch;
	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter the elements: \n");
	for (int i = 0; i < n; ++i)
	{
		printf("Enter element %d: ", (i+1));
		scanf("%d", &a[i]);
	}
	
	do
	{
		printf("\f1.Mean \n2.Median\n3.Variance\n4.Standard Deviation\n5.Quit\n");
		printf("Enter your choice as per the serial number: ");
		scanf("%d", &ch);
		float mean, median, variance, sd;
		
		switch(ch)
		{
			case 1:
				mean = mean_calc(a, n);
				printf("The mean of the given data is: %f\n", mean);
				break;
			case 2:
				median = median_calc(a, n);
				printf("The median of the given data is: %f\n", median);
				break;
			case 3:
				variance = variance_calc(a, n);
				printf("The variance of the given data is: %f\n", variance);
				break;
			case 4:
				sd = sd_calc(a, n);
				printf("The Standard Variation of the given data is: %f\n", sd);
				break;
			case 5:
				return 0;
				break;
			default:
				printf("Invalid Input!!\n");
		}
	}
	while(ch != 5);
	return 0;
}

float mean_calc(int a[10], int n)
{
	float m = 0;
	for (int i = 0; i < n; ++i)
		m += a[i];

	m = m / n;
	return m;
}

float median_calc(int a[10], int n)
{
	float m;
	sort(a, n);

	if (n % 2 == 0)
		m = (a[(n - 1) / 2] + a[((n - 1) / 2) + 1]) / 2.0;
	else
		m = a[n / 2];

	return m;	
}

float variance_calc(int a[10], int n)
{
	float v = 0, m = 0;
	m = mean_calc(a, n);

	for (int i = 0; i < n; ++i)
	{
		v += pow(a[i] - m, 2);
	}

	v = v / (n - 1);

	return v;
}

float sd_calc(int a[10], int n)
{
	return sqrt(variance_calc(a, n));
}

void sort(int a[10], int n)
{
	int j, p, temp;
	for (p = 1; p < n; p++)
	{
		temp = a[p];
		j = p;

		while (j > 0 && (a[j - 1] > temp))
		{
			a[j] = a[j - 1];
			j--;
		}

		a[j] = temp;
	}
}
