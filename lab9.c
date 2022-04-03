#include <stdio.h>
#include <malloc.h>

void insert(int*, int, int, int);
void delete(int*, int, int);
void display(int*, int);
int del_dup(int*, int);
int search(int*, int, int);

int main()
{
    int n, ch, x, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

    printf("Enter the elements: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", (arr+i));
    }

    while (1)
    {
        printf("\n1.Insert new element\n2.Delete an element\n3.Print the elements\n4.Remove duplicates\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter the element you want to insert: ");
                scanf("%d", &x);
                printf("Enter the position to insert the element: ");
                scanf("%d", &pos);
                insert(arr, n, x, pos);
                n++;
                printf("After inserting the array is: ");
                display(arr, n);
                break;
            case 2:
                printf("Enter the elements to delete: ");
                scanf("%d", &x);

                if (!search(arr, n, x))
                {
                    printf("%d is not found in the given array!\n",x);
                    break;
                }
                delete(arr, n, x);
                n--;
                printf("After deleting %d the array is: ", x);
                display(arr, n);
                break;
            case 3:
                printf("The elements of the array are: ");
                display(arr, n);
                break;
            case 4:
                 n -= del_dup(arr, n);
                printf("After deleting duplicates the array is: ");
                display(arr, n);
                break;
            case 5:
                return 0;
            default:
                printf("INVALID INPUT!\n");
        }
    }
    return 0;
}

void display(int *arr, int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d  ", *(arr+i));
}

void insert(int *arr, int n, int x, int pos)
{
    int i;
    for (i = n; i > pos - 1; --i)
       *(arr+i) = *(arr + i - 1);
    *(arr+pos-1) = x;
}

void delete(int *arr, int n, int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (*(arr+i) == x)
        {
            for (int j = i; j < n; ++j)
                *(arr+j) = *(arr+j+1);
            n--;
        }
    }
}

int del_dup(int *arr, int n)
{
    int dup = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (*(arr+i) == *(arr+j))
            {
                for (int k = j; k < n; ++k)
                    *(arr+k) = *(arr+(k + 1));
                j--;
                n--;
                dup++;
            }
        }
    }
    return dup;
}

int search(int *arr, int n, int x)
{
    for (int i = 0; i < n; ++i)
    {
        if (*(arr+i) == x)
            return 1;
    }
    return 0;
}
