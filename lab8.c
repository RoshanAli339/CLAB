#include <stdio.h>
#include <string.h>

void read(char[][30], int);
void display(char[][30], int);
void insert(char[][30], char[], int, int);
void delete(char[][30], char[30], int);
void sort(char[][30], int);
int search(char[][30], char[30], int);

int main()
{
    char names[10][30];
    char x[30];
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    read(names, n);
    int ch;
    int pos;
    while (1)
    {
        printf("\n1.Insert a name\n2.Delete a name\n3.Sort names\n4.Print list of names\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("Enter a name to insert: ");
                scanf(" %[^\n]", x);
                printf("Enter position to insert the name: ");
                scanf("%d", &pos);
                insert(names, x, n, pos);
                n++;
                printf("After inserting the list of student names is: \n");
                display(names, n);
                break;
            case 2:
                printf("Enter a name to delete: ");
                scanf(" %[^\n]", x);
                if(!search(names, x, n))
                {
                    printf("\n%s is not found in the given list of names!\n", x);
                    break;
                }
                delete(names, x, n);
                n--;
                printf("After deleting the list of student names is: \n");
                display(names, n);
                break;
            case 3:
                sort(names, n);
                printf("After sorting the list of student names is: \n");
                display(names, n);
                break;
            case 4:
                printf("The list of student names is: \n");
                display(names, n);
                break;
            case 5:
                return 0;
                break;
            default:
                printf("INVALID INPUT! Please enter a valid value!\n");
        }
    }
    return 0;
}

void read(char names[10][30], int n)
{
    printf("Enter %d names: \n", n);
    for (int i = 0; i < n; ++i)
    {
        scanf(" %[^\n]", names[i]);
    }
}

void display(char names[10][30], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%s\n", names[i]);
    }
}

void insert(char names[10][30], char x[30], int n, int pos)
{
    int i;
    for (i = n; i > pos - 1; --i)
        strcpy(names[i], names[i -1]);
    strcpy(names[pos - 1], x);
}

void delete(char names[10][30], char x[30], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (!strcmp(names[i], x))   
        {
            for (int j = i; j < n; ++j)
               strcpy(names[j], names[j+1]);
            n--;
        }
    }
}

int search(char names[10][30], char x[30], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (!strcmp(names[i], x))
        {
            return 1;
        }
    }
    return 0;
}

void sort(char names[10][30], int n)
{
    char temp[30];
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if ( strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }
}
