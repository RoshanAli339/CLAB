#include <stdio.h>

typedef struct
{
    float real, img;
}
CPX;

CPX add(CPX, CPX);
CPX subtract(CPX, CPX);
CPX multiply(CPX, CPX);

int main()
{
    int ch;
    CPX n1, n2, n3;
    printf("Enter first complex number: ");
    scanf("%f %f", &n1.real, &n1.img);
    
    printf("Enter second complex number: ");
    scanf("%f %f", &n2.real, &n2.img);

    while (1)
    {
        printf("\n1.Add complex numbers\n2.Subtract complex numbers\n3.Multiply complex numbers\n4.Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                n3 = add(n1, n2);
                printf("\nSum of given complex numbers is: %.2f + i(%.2f)\n", n3.real, n3.img);
                break;
            case 2:
                n3 = subtract(n1, n2);
                printf("Difference of given complex numbers is: %.2f + i(%.2f)\n", n3.real, n3.img);
                break;
            case 3:
                n3  = multiply(n1, n2);
                printf("Product of given complex numbers is: %.2f + i(%.2f)\n", n3.real, n3.img);
                break;
            case 4:
                return 0;
                break;
            default:
                printf("INVALID INPUT!\n");
        }
    }
}

CPX add(CPX n1, CPX n2)
{
    CPX n3;
    n3.real = n1.real + n2.real;
    n3.img = n1.img + n2.img;
    return n3;
}

CPX subtract(CPX n1, CPX n2)
{
    CPX n3;
    n3.real = n1.real - n2.real;
    n3.img = n1.img - n2.img;
    return n3;
}

CPX multiply(CPX n1, CPX n2)
{
    CPX n3;
    n3.real = (n1.real * n2.real) + (n1.img * n2.img);
    n3.img = (n1.real * n2.img) + (n1.img * n2.real);
    return n3;
}
