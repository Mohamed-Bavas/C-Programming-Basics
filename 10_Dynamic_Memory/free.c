#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
        return 1;
    *ptr = 100;
    printf("Value = %d\n", *ptr);
    free(ptr);
    ptr = NULL;
}