#include <stdio.h>
void main()
{
    FILE *file;
    file = fopen("sample.txt", "a");
    if (file == NULL)
        printf("File not found\n");
    fprintf(file, "New data added\n");
    fclose(file);
    printf("Data appended successfully\n");
}
