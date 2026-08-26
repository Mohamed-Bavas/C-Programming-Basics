#include <stdio.h>
void main()
{
    FILE *file;
    file = fopen("sample.txt", "w");
    if (file == NULL)
    {
        printf("File creation failed\n");
    }
    printf("File created successfully\n");
    fclose(file);
}