#include <stdio.h>

int main()
{
    FILE *fptr = fopen("sample.txt", "a");
    char c;
    printf("Enter text to append to the file(enter Ctrl+D to stop): \n");
   
    c = getchar();
    while(c != EOF)
    {
        fputc(c, fptr);
        c = getchar();
    }   
    
    fclose(fptr);
}
