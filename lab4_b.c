#include <stdio.h>
#include <math.h>

int dec_to_bin(int);
int bin_to_dec(int);
int dec_to_oct(int);
int oct_to_dec(int);

int main()
{
	int choice;
	printf("1.Decimal to Binary\n2.Binary to Decimal\n3.Decimal to OCtal\n4.OCtal to Decimal\n");
	printf("Enter your choice as per the serial number: ");
	scanf("%d", &choice);

	int decimal, bin, oct;

	switch(choice)
	{
		case 1:
			printf("Enter decimal number: ");
			scanf("%d", &decimal);
			bin = dec_to_bin(decimal);
			printf("Binary equivalent of %d= %d\n", decimal, bin);
			break;
		case 2:
			printf("Enter binary number: ");
			scanf("%d", &bin);
			decimal =  bin_to_dec(bin);
			printf("The decimal value of %d = %d\n", bin, decimal);
			break;
		case 3:
			printf("Enter decimal number: ");
			scanf("%d", &decimal);
			oct = dec_to_oct(decimal);
			printf("The Octal equivalent of %d = %d\n", decimal, oct);
			break;
		case 4:
			printf("Enter octal number: ");
			scanf("%d", &oct);
			decimal = oct_to_dec(oct);
			printf("The decimal value of %d = %d\n", oct, decimal);
			break;
		default:
			printf("INVALID INPUT!!");
	}
}

int dec_to_bin(int decimal)
{
	int bin = 0, place = 1;
	for (int temp = decimal; temp > 0; temp /= 2, place *= 10)
	{
		bin += (temp % 2) * place;
	}

	return bin;
}

int bin_to_dec(int bin)
{
	int decimal = 0, count = 0, temp;

	for (temp = bin; temp > 0; temp /= 10)
		count++;

	for (int i = 0, temp = bin; i < count; ++i, temp /= 10)
	{
		decimal += (temp % 10) * ((int)pow(2, i));
	}

	return decimal;
}

int dec_to_oct(int decimal)
{
	int oct = 0, place = 1;
	for (int temp = decimal; temp > 0; temp /= 8, place *= 10)
	{
		oct += (temp % 8) * place;
	}

	return oct;
}

int oct_to_dec(int oct)
{
	int decimal = 0, count  = 0, temp;

	for (temp = oct; temp > 0; temp /= 10)
		count++;

	for (int i = 0, temp = oct; i < count; ++i, temp /= 10)
	{
		decimal += (temp % 10) * ((int)pow(8, i));
	}

	return decimal;
}

