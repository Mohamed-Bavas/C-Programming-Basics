#include <stdio.h>
void main()
{
    FILE *file;
    file = fopen("sample.txt", "w");
    if (file == NULL)
      return 1;
    fprintf(file, "Embedded C Programming\n");
    fprintf(file, "Learning C basics\n");
    fclose(file);
    printf("Data written successfully\n");
}
