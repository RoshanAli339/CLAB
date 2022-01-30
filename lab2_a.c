#include <stdio.h>
#include <math.h>

int main()
{
	int choice;
	float s, l, b, t1, t2, t3, r, pr, ar;

	printf("Choose from the following polygons of which you want to find the area and perimeter of: \n");
	printf("1.Square\n2.Rectangle\n3.Triangle\n4.Circle\n");
	printf("Enter your choice as per the serial number: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter length of side of square: ");
			scanf("%f", &s);
			pr = 4 * s;
			ar = s * s;
			break;
		case 2:
			printf("Enter length of rectangle: ");
			scanf("%f", &l);
			printf("Enter breadth of rectangle: ");
			scanf("%f", &b);
			pr = 2 * (l + b);
			ar = l * b;
			break;
		case 3:
			printf("Enter the lengths of three sides of the triangle: ");
			scanf("%f %f %f", &t1, &t2, &t3);
			pr = t1 + t2 + t3;
			ar = sqrt(pr/2 * ((pr/2) - t1) * ((pr/2) - t2) * ((pr/2) - t3));
			break;
		case 4:
			printf("Enter the radius of the circle: ");
			scanf("%f", &r);
			pr = 2 * (22.0/7) * r;
			ar = (22.0/7) * r * r;
			break;
		default:
			printf("INVALID INPUT!");
	}

	printf("Perimeter = %.2f\nArea = %.2f\n", pr, ar);
}
