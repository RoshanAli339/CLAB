#include <stdio.h>

int main()
{
	float a,b,c,d,g,h,v,X,Y,R;
	int e, f;
	printf("a= ");
	scanf("%f",&a);
	printf("b= ");
	scanf("%f",&b);
	printf("c= ");
	scanf("%f",&c);
	printf("d= ");
	scanf("%f",&d);
	printf("e= ");
	scanf("%d",&e);
	printf("f= ");
	scanf("%d",&f);
	printf("g= ");
	scanf("%f",&g);
	printf("h= ");
	scanf("%f",&h);
	printf("v= ");
	scanf("%f",&v);
	
	X = (a - ((b / c) * d) + e) * (f + g);
	Y = (8.8 * (a + b)) / (g + (h * (c / d)) - (e % f));
	R = ((2 * v) + (6.22 * (c + d))) / (g + v);
	
	printf("X= %f\n", X);
	printf("Y= %f\n", Y);
	printf("R= %f\n", R);
	
	return 0;
}
