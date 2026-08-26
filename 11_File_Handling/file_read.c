#include <stdio.h>
void main()
{
    FILE *file;
    char ch;
    file = fopen("sample.txt", "r");
    if (file == NULL)
    {
        printf("File not found\n");
    }
    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(file);
}
