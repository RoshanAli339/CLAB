#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter the value of a: ");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);

	//swapping using bitwise operators
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After swapping using bitwise operators a: %d and b: %d\n",a, b);

	//swapping using arithmetic operators
	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swapping using arithmetic operators a: %d and b: %d\n",a, b);
}
