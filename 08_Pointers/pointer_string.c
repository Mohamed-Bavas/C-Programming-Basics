#include <stdio.h>
void main()
{
    char str[] = "Embedded C";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
}