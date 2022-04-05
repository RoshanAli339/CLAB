#include <stdio.h>

void read(int[][5], int*, int*);
void add(int[][5], int[][5], int[][5], int, int);
void multiply(int[][5], int[][5], int[][5], int, int, int, int);
void display(int[][5], int, int);
void transpose(int[][5], int[][5], int, int);

int main()
{
    int a[5][5], b[5][5], c[5][5], r1, c1, r2, c2;
    printf("Matrix A: \n");
    read(a, &r1, &c1);

    printf("Matrix B: \n");
    read(b, &r2, &c2);

    int ch;

    while(1)
    {
        printf("\n1.Add matrices\n2.Multiply matrices\n3.Find transpose of Matrix A\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) 
        {
            case 1:
                if (r1 != r2 || c1 != c2)
                {
                    printf("Matrix Addition not possible!!\n");
                    return 1;
                }
                add(a, b, c, r1, c1);
                printf("A + B = \n");
                display(c, r1, c1);
                break;
            case 2:
                if (c1 != r2)
                {
                    printf("Matrix multiplication not possible!!\n");
                    return 1;
                }
                multiply(a, b, c, r1, c1, r2, c2);
                printf("A * B = \n");
                display(c, r1, c2);
                break;
            case 3:
                transpose(a, c, r1, c1);
                printf("Transpose of Matrix A: \n");
                display(c, r1, c1);
                break;
            case 4:
                return 0;
                break;
            default:
                printf("PLEASE ENTER A VALID VALUE!!\n");
        }
    }
}

void read(int a[5][5], int *r, int *c)
{
    printf("Enter number of rows: ");
    scanf("%d", r);
    printf("Enter number of columns: ");
    scanf("%d", c);
    
    int m = *r;
    int n = *c;
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
}

void display (int a[5][5], int r, int c)
{
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
            printf("%d  ", a[i][j]);
        printf("\n");
    }
}
void add(int a[5][5], int b[5][5], int sum[5][5], int r, int c)
{
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];
}

void multiply(int a[5][5], int b[5][5], int c[5][5], int r1, int c1, int r2, int c2)
{
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
        {
            c[i][j] = 0;
            for (int k = 0; k < c1; ++k)
                c[i][j] += a[i][k] * b[k][j];
        }
}

void transpose(int a[5][5], int b[5][5], int r, int c)
{
    for (int i = 0 ; i < r; ++i)
        for (int j = 0; j < c; ++j)
            b[j][i] = a[i][j];
}
