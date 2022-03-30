#include <stdio.h>
#include <math.h>
#include <string.h>

int dec_to_bin(int);
int bin_to_dec(int);
int dec_to_oct(int);
int oct_to_dec(int);
void dec_to_hex(int decimal, char hex[]);
int hex_to_dec(char hex[]);

int main()
{
	int choice;
	printf("1.Decimal to Binary\n2.Binary to Decimal\n3.Decimal to Octal\n4.Octal to Decimal\n5.Decimal to Hexadecimal\n6.Hexadecimal to Decimal\n");
	printf("Enter your choice as per the serial number: ");
	scanf("%d", &choice);

	int decimal, bin, oct;
	char hex[32];

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
		case 5:
			printf("Enter decimal number: ");
			scanf("%d", &decimal);
			dec_to_hex(decimal, hex);
			printf("Hexadecimal equivalent of %d= 0x%s\n", decimal, hex);
			break;
		case 6:
			printf("Enter hexadecimal value: 0x");
			scanf("%s", hex);
			decimal = hex_to_dec(hex);
			printf("The decimal value of 0x%s= %d\n", hex, decimal);
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

void dec_to_hex(int decimal, char hex[32])
{
	char conv[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	int i = 0, temp;

	for (temp = decimal; temp > 0; i++, temp /= 16)
	{
		hex[i] = conv[temp % 16];
	}

	hex[i] = '\0';
	int len = strlen(hex);

	for (int i = 0; i < len/2; ++i)
	{
		temp = hex[i];
		hex[i] = hex[len - i - 1];
		hex[len - i - 1] = temp;
	}
}

int hex_to_dec(char hex[32])
{
	char conv[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int decimal = 0, p = 0;

	for (int i = strlen(hex) - 1; i >= 0; --i)
	{
		for (int j = 0; j < strlen(conv); ++j)
		{
			if (hex[i] == conv[j])
			{
				decimal += j * ((int)pow(16, p));
				p++;
				break;
			}
		}
	}

	return decimal;
}
