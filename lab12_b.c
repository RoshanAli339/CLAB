#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Required number of arguments are not given!\n");
        return 0;
    }

    FILE *f1 = fopen(argv[1], "r");
    if (f1 == NULL)
    {
        printf("Unabel to open file!\n");
        return 1;
    }

    FILE *f2 = fopen(argv[2], "w");

    char ch;
    while ((ch = fgetc(f1))!=EOF)
    {
        fputc(ch, f2);
    }

    fclose(f1);
    fclose(f2);
}
