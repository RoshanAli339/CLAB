#include <stdio.h>

int main()
{
    FILE *fptr = fopen("sample.txt", "a");
    char c;
    printf("Enter text to append to the file(enter Ctrl+D to stop): \n");
    
    do 
    {
        fputc(c, fptr);
        c = getchar();
    }   
    while (c!= EOF);
    
    fclose(fptr);
}
