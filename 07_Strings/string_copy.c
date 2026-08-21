#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Embedded C";
    char destination[50];
    strcpy(destination, source);
    printf("Copied string = %s\n", destination);
    return 0;
}