#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    int i;
    ptr = (int *)malloc(3 * sizeof(int));
    if (ptr == NULL)
        return 1;
    for (i = 0; i < 3; i++)
        ptr[i] = (i + 1) * 10;
    ptr = (int *)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL)
        return 1;
    ptr[3] = 40;
    ptr[4] = 50;
    for (i = 0; i < 5; i++)
        printf("%d ", ptr[i]);
    free(ptr);
}