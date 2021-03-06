#include <stdio.h>
#include <malloc.h>

void transpose(int*[5], int*[5], int, int);
void upperTri(int*[5], int, int);
void lowerTri(int*[5], int, int);
void display(int*[5], int, int);

int main()
{
    int m, n, ch;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    int *mat[5];
    int *x[5];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < m; ++i)
    {
        x[i] = (int*)malloc(n * sizeof(int));
        mat[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; ++j)
            scanf("%d", (mat[i]+j));
    }

    while (1)
    {
        printf("\n1.Transpose of matrix\n2.Upper triangle\n3.Print elements\n4.Lower triangle\n5.Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                transpose(mat, x, m, n);
                printf("Transpose of given matrix is: \n");
                display(x, m, n);
                break;
            case 2:
                printf("Upper triangular matrix is: \n");
                upperTri(mat, m , n);
                break;
            case 3:
                printf("The elements of the matrix are: \n");
                display(mat, m, n);
                break;
            case 4:
                printf("Lower triangular matrix is: \n");
                lowerTri(mat, m, n);
                break;
            case 5:
                return 0;
                break;
            default:
                printf("INVALID INPUT!\n");
        }
    }
    return 0;
}

void transpose(int *mat[5], int *x[5], int m, int n)
{
   for (int i = 0; i < m; ++i)
       for (int j = 0; j < n; ++j)
            *(x[i]+j) = *(mat[j]+i);
}

void upperTri(int *mat[5], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i > j)
                printf("   ");
            else
                printf("%2d ", *(mat[i]+j));
        }
        printf("\n");
    }
}
    
void lowerTri(int *mat[5], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i >= j)
                printf("%2d ", *(mat[i]+j));
            else
                printf(" ");
        }
        printf("\n");
    }
}

void display(int *mat[5], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            printf("%2d ", *(mat[i]+j));
        printf("\n");
    }
}
